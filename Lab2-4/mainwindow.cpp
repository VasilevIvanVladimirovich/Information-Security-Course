#include "mainwindow.h"
#include "qcustomplot.h"
#include "ui_mainwindow.h"

const int const_num = 4;

QString debug = "";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->Round1->setReadOnly(true);
  ui->Round2->setReadOnly(true);
  ui->Round3->setReadOnly(true);
  ui->Round4->setReadOnly(true);
  ui->Round5->setReadOnly(true);
  ui->Round6->setReadOnly(true);
  ui->Round7->setReadOnly(true);
  ui->Round8->setReadOnly(true);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::bin(int n,
                     QVector<int> &bit_array) //функция перевода числа в
                                              //двоичную систему счисления
{
  int arr[5];
  for (int i = 4; i >= 0; i--) {
    arr[i] = n % 2;
    n = n / 2;
  }
  for (int i = 0; i < 5; i++) {
    bit_array.push_back(arr[i]);
  }
}

double MainWindow::MaxValue(QVector<int> &gen, int n) {
  double max = gen[0];
  for (int i = 1; i < n; i++) {
    if (gen[i] > max)
      max = gen[i];
  }
  return max;
}

double MainWindow::MinValue(QVector<int> &gen, int n) {
  double min = gen[0];
  for (int i = 1; i < n; i++) {
    if (gen[i] < min)
      min = gen[i];
  }
  return min;
}

void MainWindow::Word(
    QString str,
    QVector<int> &bit_array) // функция перевода строки в двоичный код
{
  int *arr_num = new int[str.length()];
  QString smal[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и", "й", "к",
                      "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х",
                      "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};
  QString big[32] = {"А", "Б", "В", "Г", "Д", "Е", "Ж", "З", "И", "Й", "К",
                     "Л", "М", "Н", "О", "П", "Р", "С", "Т", "У", "Ф", "Х",
                     "Ц", "Ч", "Ш", "Щ", "Ъ", "Ы", "Ь", "Э", "Ю", "Я"};
  for (int i = 0; i < str.length();
       i++) //перебор символов и запись их в вектор двоичных чисел
  {
    for (int j = 0; j < 32; j++) {
      if (str[i] == smal[j]) {
        arr_num[i] = j;
        bin(arr_num[i], bit_array);
        break;
      } else if (str[i] == big[j]) {
        arr_num[i] = j;
        bin(arr_num[i], bit_array);
        break;
      }
    }
  }
  delete[] arr_num;
}

void MainWindow::invertLastBit(QVector<int> &out_bit) {
  int back;
  if (out_bit.back() == 0)
    back = 1;
  else if (out_bit.back() == 1)
    back = 0;
  out_bit.pop_back();
  out_bit.push_back(back);
}

void MainWindow::sum(QVector<int> &out_bit, int *buf_array, int *K) {
  for (int i = 0; i < 5; i++) {
    if ((buf_array[i] == 1 && K[i] == 1) || (buf_array[i] == 0 && K[i] == 0))
      out_bit.push_back(0);
    if ((buf_array[i] == 1 && K[i] == 0) || (buf_array[i] == 0 && K[i] == 1))
      out_bit.push_back(1);
  }
}

void MainWindow::ECB(QVector<int> &bit_array, QVector<int> &ECB_out_bit,
                     int *K0, int *K1) {
  int buf_array[5];
  for (int i = 0; i < bit_array.length(); i += 5) {
    for (int j = 0; j < 5; j++) {
      buf_array[j] = bit_array[j + i];
    }
    if (buf_array[4] == 0)
      sum(ECB_out_bit, buf_array, K0); // P1+K
    else
      sum(ECB_out_bit, buf_array, K1);
    invertLastBit(ECB_out_bit);
  }
}

void MainWindow::convertBinareDecimal(QVector<int> &out_bit,
                                      QVector<int> &ECB_out) {
  int sum;
  for (int i = 0; i < out_bit.length(); i += 5) {
    sum = 0;
    for (int j = 4, k = 0; j >= 0; j--, k++) {
      if (out_bit[i + k] == 1)
        sum += pow(2, j);
    }
    ECB_out.push_back(sum);
  }
}

void MainWindow::CPC(QVector<int> &bit_array, QVector<int> &CPC_out_bit,
                     int *C0) {
  int C[5];
  for (int i = 0; i < 5; i++)
    C[i] = C0[i];
  int buf[5];
  for (int i = 0; i < bit_array.length(); i += 5) {
    for (int j = 0; j < 5; j++) {
      buf[j] = bit_array[i + j];
    }
    sum(CPC_out_bit, buf, C); // P1+C0
    if (CPC_out_bit[i] == 0)
      CPC_out_bit[i] = 1;
    else if (CPC_out_bit[i] == 1)
      CPC_out_bit[i] = 0;
    for (int k = 0; k < 5; k++)
      C[k] = CPC_out_bit[k + i];
  }
  //Этот код написал я, Василье Иван :D !
}

void MainWindow::sumArray(int *arr1, int *arr2, int *result) {
  for (int i = 0; i < 5; i++) {
    if ((arr1[i] == 1 && arr2[i] == 1) || (arr1[i] == 0 && arr2[i] == 0))
      result[i] = 0;
    if ((arr1[i] == 1 && arr2[i] == 0) || (arr1[i] == 0 && arr2[i] == 1))
      result[i] = 1;
  }
}

void MainWindow::sumArray(QVector<int> &arr1, QVector<int> &arr2,
                          QVector<int> &result) {
  for (int i = 0; i < arr1.length(); i++) {
    if ((arr1[i] == 1 && arr2[i] == 1) || (arr1[i] == 0 && arr2[i] == 0))
      result.push_back(0);
    if ((arr1[i] == 1 && arr2[i] == 0) || (arr1[i] == 0 && arr2[i] == 1))
      result.push_back(1);
  }
}

void MainWindow::OFB(QVector<int> &bit_array, QVector<int> &OFB_out_bit,
                     int *C0, int *P0) {
  int buf_sum[5];
  int bin_word[5];
  int C[5];
  int P[5];
  for (int i = 0; i < 5; i++)
    C[i] = C0[i];
  for (int i = 0; i < 5; i++)
    P[i] = P0[i];

  for (int i = 0; i < bit_array.length(); i += 5) {
    for (int j = 0; j < 5; j++)
      bin_word[j] = bit_array[i + j];
    sumArray(C, P, buf_sum);        // C0+P0
    sumArray(bin_word, buf_sum, C); // P1+(C0+P0)
    if (C[4] == 0)
      C[4] = 1;
    else if (C[4] == 1)
      C[4] = 0;
    for (int j = 0; j < 5; j++)
      P[j] = bin_word[j];
    for (int j = 0; j < 5; j++)
      OFB_out_bit.push_back(C[j]);
  }
}

void MainWindow::CFB(QVector<int> &bit_array, QVector<int> &OFB_out_bit,
                     int *C0) {
  int C[5];
  int buf[5];
  for (int i = 0; i < 5; i++)
    C[i] = C0[i];
  if (C[0] == 0)
    C[0] = 1;
  else if (C[0] == 1)
    C[0] = 0;
  for (int i = 0; i < bit_array.length(); i += 5) {
    for (int j = 0; j < 5; j++)
      buf[j] = bit_array[i + j];
    sum(OFB_out_bit, buf, C); // P1+С0
    invertLastBit(OFB_out_bit);
    for (int j = 0; j < 5; j++)
      C[j] = OFB_out_bit[i + j];
  }
}

bool MainWindow::checkWordInArray(int idexText, QString key,
                                  QString *arrayText) {
  for (int i = 0; i < 16; i++) {
    if (key[idexText] == arrayText[i] || key[idexText] == " ")
      return false;
  }
  return true;
}

bool MainWindow::checkWordInAlph(int indexAlph, QString *alph,
                                 QString *arrayText) {
  for (int i = 0; i < 16; i++) {
    if (alph[indexAlph] == arrayText[i])
      return false;
  }
  return true;
}

void MainWindow::createNewAlph(QString key, QString *alph) {
  QString arrayText[16] = {0};
  QString arrayLast[16] = {0};
  QString lastWord;

  for (int idexText = 0, indexArrey = 0; indexArrey < 16;
       idexText++) // алгоритм заполнения верхнего массива (текстового по ключу)
  {
    if (checkWordInArray(idexText, key, arrayText)) {
      arrayText[indexArrey] = key[idexText];
      indexArrey++;
    }
  }

  for (int indexAlph = 0, ind = 0; indexAlph < 32 && ind < 17;
       indexAlph++) // алгоритм заполнения нижнего массива (оставшиеся пары)
  {
    if (checkWordInAlph(indexAlph, alph, arrayText)) {
      arrayLast[ind] = alph[indexAlph];
      ind++;
    } else
      continue;
  }

  bool exit = false;

  for (int indexAlph = 0; indexAlph < 32; indexAlph++) {
    exit = false;
    for (int i = 0; i < 16; i++) {
      if (alph[indexAlph] == arrayText[i]) {
        alph[indexAlph] = arrayLast[i];
        exit = true;
        break;
      }
    }
    if (exit)
      continue;
    for (int i = 0; i < 16; i++) {
      if (alph[indexAlph] == arrayLast[i]) {
        alph[indexAlph] = arrayText[i];
        break;
      }
    }
  }
}

bool MainWindow::checkWordInArray2(int idexText, QString key,
                                   QString *arrayText) {
  for (int i = 0; i < 32; i++) {
    if (key[idexText] == arrayText[i] || key[idexText] == " ")
      return false;
  }
  return true;
}

bool MainWindow::checkWordInArray2(int idexText, QString *key,
                                   QString *arrayText) {
  for (int i = 0; i < 32; i++) {
    if (key[idexText] == arrayText[i] || key[idexText] == " ")
      return false;
  }
  return true;
}

void MainWindow::createNewAlphPogvorka(QString key, QString *alph,
                                       QString *alphDefault) {
  QString newAlph[32] = {0};
  int indexArreyAlph = 0;
  for (int idexText = 0; idexText < key.length(); idexText++) {
    if (checkWordInArray2(idexText, key, newAlph)) {
      newAlph[indexArreyAlph] = key[idexText];
      indexArreyAlph++;
    }
  }

  for (; indexArreyAlph < 32; indexArreyAlph++) {
    for (int indexDefAlph = 0; indexDefAlph < 32;
         indexDefAlph++) { //по массиву дефолтного алфавита
      if (checkWordInArray2(indexDefAlph, alphDefault, newAlph)) {
        newAlph[indexArreyAlph] = alphDefault[indexDefAlph];
        break;
      }
    }
  }

  for (int i = 0; i < 32; i++) {
    alph[i] = newAlph[i];
  }
}

QString MainWindow::translateText(QString text, QString *alph,
                                  QString *alphDefault) {
  QString newText;
  for (int i = 0; i < text.length(); i++) {
    for (int indexAlph = 0; indexAlph < 32; indexAlph++) {
      if (text[i] == alphDefault[indexAlph])
        newText += alph[indexAlph];
    }
  }
  for (int i = 0; i < 32; i++) {
    alph[i] = alphDefault[i];
  }
  return newText;
}

void MainWindow::createNewAlphConstant(QString *alph) {
  QString alphDefault[32] = {"а", "б", "в", "г", "д", "е", "ж", "з",
                             "и", "й", "к", "л", "м", "н", "о", "п",
                             "р", "с", "т", "у", "ф", "х", "ц", "ч",
                             "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};

  for (int i = 0; i < 28; i++) {
    alph[i] = alphDefault[i + 4];
  }
  for (int i = 28, k = 0; i < 32; i++, k++) {
    alph[i] = alphDefault[k];
  }
}

void MainWindow::MatrixMultiplication(int (&A_matr)[5][5], int *x0,
                                      int *x_func) {
  int sum;
  for (int i = 0; i < 5; i++) {
    sum = 0;
    for (int j = 0; j < 5; j++) {
      sum += A_matr[i][j] * x0[j];
    }
    x_func[i] = sum;
  }
}

void MainWindow::GenerateLFSR(QVector<int> &arrayLFSR, int (&A_matr)[5][5],
                              int N) {
  int x0[5] = {1, 0, 0, 0, 0};
  int x_func[5];
  int sum_binare;
  for (int i = 0; i < N; i++) {
    MatrixMultiplication(A_matr, x0, x_func);
    for (int count = 0; count < 5; count++) {
      x0[count] = x_func[count];
      x0[count] %= 2;
    }
    sum_binare = 0;
    for (int j = 4, k = 0; k < 5; j--, k++) {
      sum_binare += x0[j] * pow(2, k);
    }
    arrayLFSR.push_back(sum_binare);
  }
}

void MainWindow::lab2(QString key, QString text) {
  QString newalph[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и", "й", "к",
                         "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х",
                         "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};

  QString alphDefault[32] = {"а", "б", "в", "г", "д", "е", "ж", "з",
                             "и", "й", "к", "л", "м", "н", "о", "п",
                             "р", "с", "т", "у", "ф", "х", "ц", "ч",
                             "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};

  QString alphSdvig[32] = {"а", "б", "в", "г", "д", "е", "ж", "з",
                           "и", "й", "к", "л", "м", "н", "о", "п",
                           "р", "с", "т", "у", "ф", "х", "ц", "ч",
                           "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};
  QString alphPogovorka[32] = {"а", "б", "в", "г", "д", "е", "ж", "з",
                               "и", "й", "к", "л", "м", "н", "о", "п",
                               "р", "с", "т", "у", "ф", "х", "ц", "ч",
                               "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};

  key = key.toLower();
  text = text.toLower();
  int N = text.length();
  double h, hh = 0;
  double ni;
  int m = 32;
  double a, b;
  ///////////////////////////////////////////// 1
  QString newText1;
  createNewAlph(key, newalph);
  newText1 = translateText(text, newalph, alphDefault);
  QVector<int> bit_array_one;
  QVector<int> decimal_array_one;
  Word(newText1, bit_array_one);
  convertBinareDecimal(bit_array_one, decimal_array_one);

  N = decimal_array_one.length();
  hh = 0;
  a = MinValue(decimal_array_one, N);
  b = MaxValue(decimal_array_one, N);
  h = 1;
  QVector<double> x1(m), y1(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_array_one[j] >= double(a) + hh and
          decimal_array_one[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x1[i] = double(a) + hh + (h / 2);
    y1[i] = ni;
    hh += h;
  }
  double first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y1[i] > first_maxY)
      first_maxY = y1[i];
  }
  ui->plot1->xAxis->setRange(0, 32);
  ui->plot1->yAxis->setRange(0,
                             first_maxY); //сюда надо вставить максимальное h
  QCPBars *bars1 = new QCPBars(ui->plot1->xAxis, ui->plot1->yAxis);
  bars1->setData(x1, y1, true);
  bars1->setWidth(h);
  ui->plot1->replot();
  ///////////////////////////////////////////// 2 -константа

  QString newText2;
  createNewAlphConstant(alphSdvig);
  newText2 = translateText(text, alphSdvig, alphDefault);
  QVector<int> bit_array_two;
  QVector<int> decimal_array_two;
  Word(newText2, bit_array_two);
  convertBinareDecimal(bit_array_two, decimal_array_two);

  N = decimal_array_two.length();
  hh = 0;
  a = MinValue(decimal_array_two, N);
  b = MaxValue(decimal_array_two, N);
  h = 1;
  QVector<double> x2(m), y2(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_array_two[j] >= double(a) + hh and
          decimal_array_two[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x2[i] = double(a) + hh + (h / 2);
    y2[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y2[i] > first_maxY)
      first_maxY = y2[i];
  }
  ui->plot2->xAxis->setRange(0, 32);
  ui->plot2->yAxis->setRange(0,
                             first_maxY); //сюда надо вставить максимальное h
  QCPBars *bars2 = new QCPBars(ui->plot2->xAxis, ui->plot2->yAxis);
  bars2->setData(x2, y2, true);
  bars2->setWidth(h);
  ui->plot2->replot();

  ///////////////////////////////////////////// 3
  QString newText3;
  createNewAlphPogvorka(key, alphPogovorka, alphDefault);
  newText3 = translateText(text, alphPogovorka, alphDefault);
  QVector<int> bit_array_tree;
  QVector<int> decimal_array_tree;
  Word(newText3, bit_array_tree);
  convertBinareDecimal(bit_array_tree, decimal_array_tree);

  N = decimal_array_tree.length();
  hh = 0;
  a = MinValue(decimal_array_tree, N);
  b = MaxValue(decimal_array_tree, N);
  h = 1;
  QVector<double> x3(m), y3(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_array_tree[j] >= double(a) + hh and
          decimal_array_tree[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x3[i] = double(a) + hh + (h / 2);
    y3[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y3[i] > first_maxY)
      first_maxY = y3[i];
  }
  ui->plot3->xAxis->setRange(0, 32);
  ui->plot3->yAxis->setRange(0,
                             first_maxY); //сюда надо вставитьмаксимальное h
  QCPBars *bars3 = new QCPBars(ui->plot3->xAxis, ui->plot3->yAxis);
  bars3->setData(x3, y3, true);
  bars3->setWidth(h);
  ui->plot3->replot();

  ///////////////////////////////////////////// 4
  QVector<int> bin_array_text;
  Word(text, bin_array_text);
  int X4 = 1;
  int X3 = 1;
  int X2 = 0;
  int X1 = 1;
  int X0 = 1;

  int A_matr[5][5] = {
      {X4, X3, X2, X1, X0}, {1, 0, 0, 0, 0}, {0, 1, 0, 0, 0},
      {0, 0, 1, 0, 0},      {0, 0, 0, 1, 0},
  };
  QVector<int> arrayLFSR;
  QVector<int> binare_arrayLFSR;
  QVector<int> binare_array_sum;
  QVector<int> decimal_array_four;
  GenerateLFSR(arrayLFSR, A_matr, text.length());
  sumArray(bin_array_text, binare_arrayLFSR, binare_array_sum);
  convertBinareDecimal(binare_array_sum, decimal_array_four);

  N = decimal_array_four.length();
  hh = 0;
  a = 0;
  b = 32;
  h = 1;
  QVector<double> x4(m), y4(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_array_four[j] >= a + hh and
          decimal_array_four[j] < a + hh + h)
        ni++;
      else
        continue;
    }
    x4[i] = double(a) + hh + (h / 2);
    y4[i] = ni;
    hh += h;
  }

  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y4[i] > first_maxY)
      first_maxY = y4[i];
  }
  ui->plot4->xAxis->setRange(0, 32);
  ui->plot4->yAxis->setRange(0, first_maxY);
  QCPBars *bars4 = new QCPBars(ui->plot4->xAxis, ui->plot4->yAxis);
  bars4->setData(x4, y4, true);
  bars4->setWidth(h);
  ui->plot4->replot();
}

void MainWindow::bin8bit(int n,
                         QVector<int> &bit_array) //функция перевода числа в
                                                  //двоичную систему счисления
{
  int arr[8];
  for (int i = 7; i >= 0; i--) {
    arr[i] = n % 2;
    n = n / 2;
  }
  for (int i = 0; i < 8; i++) {
    bit_array.push_back(arr[i]);
  }
}

void MainWindow::WordEightBit(
    QString str, QVector<int> &bit_array,
    bool iskey) // функция перевода строки в двоичный код
{
  int *arr_num = new int[str.length()];
  QString smal[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и", "й", "к",
                      "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х",
                      "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};
  QString big[32] = {"А", "Б", "В", "Г", "Д", "Е", "Ж", "З", "И", "Й", "К",
                     "Л", "М", "Н", "О", "П", "Р", "С", "Т", "У", "Ф", "Х",
                     "Ц", "Ч", "Ш", "Щ", "Ъ", "Ы", "Ь", "Э", "Ю", "Я"};
  if (!iskey) {
    if (str.length() % 2 != 0) {
      for (int i = 0; i < 8; i++)
        bit_array.push_back(0);
    }
  }
  for (int i = 0; i < str.length();
       i++) //перебор символов и запись их в вектор двоичных чисел
  {
    for (int j = 0; j < 32; j++) {
      if (str[i] == smal[j]) {
        arr_num[i] = j;
        bin8bit(arr_num[i], bit_array);
        break;
      } else if (str[i] == big[j]) {
        arr_num[i] = j;
        bin8bit(arr_num[i], bit_array);
        break;
      }
    }
  }
  delete[] arr_num;
}

void MainWindow::sumArray2(int *arr1, int *arr2, int *result) {
  for (int i = 0; i < 8; i++) {
    if ((arr1[i] == 1 && arr2[i] == 1) || (arr1[i] == 0 && arr2[i] == 0))
      result[i] = 0;
    if ((arr1[i] == 1 && arr2[i] == 0) || (arr1[i] == 0 && arr2[i] == 1))
      result[i] = 1;
  }
}

void MainWindow::sdvig(int *result) {
  int buffer[8];
  for (int i = 0; i < 4; i++) {
    buffer[i] = result[i];
  }
  for (int i = 4; i < 8; i++) {
    buffer[i - 1] = result[i];
  }
  buffer[7] = result[3];
  for (int i = 0; i < 8; i++) {
    result[i] = buffer[i];
  }
}

void MainWindow::round(QVector<int> &bit_array_text, int NumRound,
                       QVector<int> &bit_array_key, QString str) {
  bool propuskRight = true;
  int left[8];
  int right[8];
  int key[8];
  int result[8];
  QVector<int> buffer;
  NumRound--;

  if (str.length() % 2 != 0)
    propuskRight = false;

  for (int rezakEpta = 0; rezakEpta < 8; rezakEpta++) {
    key[rezakEpta] = bit_array_key[rezakEpta + NumRound * 8];
  }

  for (int rezak = 0; rezak < bit_array_text.length(); rezak += 16) {
    for (int i = 0; i < 8; i++)
      left[i] = bit_array_text[i + rezak];
    for (int i = 0; i < 8; i++)
      right[i] = bit_array_text[i + rezak + 8];
    sumArray2(right, key, result);
    sdvig(result);

    if (NumRound != 7) {
      for (int i = 0; i < 8; i++) {
        right[i] = left[i];
        left[i] = result[i];
      }
    } else {
      for (int i = 0; i < 8; i++)
        left[i] = result[i];
    }

    for (int i = 0; i < 8; i++)
      buffer.push_back(left[i]);
    if (propuskRight) {
      for (int i = 0; i < 8; i++)
        buffer.push_back(right[i]);
      propuskRight = true;
    } else
      propuskRight = true;
  }
  bit_array_text.clear();
  bit_array_text = buffer;
}

void MainWindow::convertBinare8Decimal(QVector<int> &in_bit,
                                       QVector<int> &out_decimal) {
  out_decimal.clear();
  int sum;
  for (int i = 0; i < in_bit.length(); i += 5) {
    sum = 0;
    for (int j = 4, k = 0; j >= 0; j--, k++) {
      if (in_bit[i + k] == 1) {
        sum += pow(2, j);
      }
    }
    out_decimal.push_back(sum);
  }
}

void MainWindow::rubka(QVector<int> &bit_array, QVector<int> &decimal_array) {
  QVector<int> buffer;
  for (int i = 3; i < bit_array.length(); i += 8) {
    for (int j = 0; j < 5; j++) {
      buffer.push_back(bit_array[i + j]);
    }
    convertBinare8Decimal(buffer, decimal_array);
  }
}

QString MainWindow::convertDecimalWords(QVector<int> DecimalArr) {
  QString stringOut;
  QString alph[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и", "й", "к",
                      "л", "м", "н", "о", "п", "р", "с", "т", "у", "ф", "х",
                      "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};

  for (int i = 0; i < DecimalArr.length(); i++) {
    stringOut += alph[DecimalArr[i]];
  }
  return stringOut;
}

void MainWindow::lab3(QString text, QString key) {
  QVector<int> bit_array_text;
  QVector<int> bit_array_keys;

  QVector<int> bit_one;
  QVector<int> decimal_one;

  QVector<int> bit_two;
  QVector<int> decimal_two;

  QVector<int> bit_tree;
  QVector<int> decimal_tree;

  QVector<int> bit_four;
  QVector<int> decimal_four;

  QVector<int> bit_five;
  QVector<int> decimal_five;

  QVector<int> bit_six;
  QVector<int> decimal_six;

  QVector<int> bit_seven;
  QVector<int> decimal_seven;

  QVector<int> bit_eight;
  QVector<int> decimal_eight;

  WordEightBit(text, bit_array_text, false);

  WordEightBit(key, bit_array_keys, true);

  bit_one = bit_array_text;
  round(bit_one, 1, bit_array_keys, text);
  rubka(bit_one, decimal_one);

  ui->Round1->setText(convertDecimalWords(decimal_one));

  bit_two = bit_one;
  round(bit_two, 2, bit_array_keys, text);
  rubka(bit_two, decimal_two);

  ui->Round2->setText(convertDecimalWords(decimal_two));

  bit_tree = bit_two;
  round(bit_tree, 3, bit_array_keys, text);
  rubka(bit_tree, decimal_tree);

  ui->Round3->setText(convertDecimalWords(decimal_tree));

  bit_four = bit_tree;
  round(bit_four, 4, bit_array_keys, text);
  rubka(bit_four, decimal_four);

  ui->Round4->setText(convertDecimalWords(decimal_four));

  bit_five = bit_four;
  round(bit_five, 5, bit_array_keys, text);
  rubka(bit_five, decimal_five);

  ui->Round5->setText(convertDecimalWords(decimal_five));

  bit_six = bit_five;
  round(bit_six, 6, bit_array_keys, text);
  rubka(bit_six, decimal_six);

  ui->Round6->setText(convertDecimalWords(decimal_six));

  bit_seven = bit_six;
  round(bit_seven, 7, bit_array_keys, text);
  rubka(bit_seven, decimal_seven);

  ui->Round7->setText(convertDecimalWords(decimal_seven));

  bit_eight = bit_seven;
  round(bit_eight, 8, bit_array_keys, text);
  rubka(bit_eight, decimal_eight);

  ui->Round8->setText(convertDecimalWords(decimal_eight));

  int N = text.length();
  double h, hh = 0;
  double ni;
  int m = 32;
  double a, b;
  ////////////////////////////////////////////1

  N = decimal_one.length();
  a = MinValue(decimal_one, N);
  b = MaxValue(decimal_one, N);
  h = 1;

  QVector<double> x1(m), y1(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_one[j] >= double(a) + hh and
          decimal_one[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x1[i] = double(a) + hh + (h / 2);
    y1[i] = ni;
    hh += h;
  }
  double first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y1[i] > first_maxY)
      first_maxY = y1[i];
  }
  ui->one->xAxis->setRange(0, 32);
  ui->one->yAxis->setRange(0, first_maxY);
  QCPBars *bars1 = new QCPBars(ui->one->xAxis, ui->one->yAxis);
  bars1->setData(x1, y1, true);
  bars1->setWidth(h);
  ui->one->replot();

  ////////////////////////////////////////////1

  N = decimal_two.length();
  a = MinValue(decimal_two, N);
  b = MaxValue(decimal_two, N);
  h = 1;
  hh = 0;
  QVector<double> x2(m), y2(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_two[j] >= double(a) + hh and
          decimal_two[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x2[i] = double(a) + hh + (h / 2);
    y2[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y2[i] > first_maxY)
      first_maxY = y2[i];
  }
  ui->two->xAxis->setRange(0, 32);
  ui->two->yAxis->setRange(0, first_maxY);
  QCPBars *barstwo = new QCPBars(ui->two->xAxis, ui->two->yAxis);
  barstwo->setData(x2, y2, true);
  barstwo->setWidth(h);
  ui->two->replot();
  ////////////////////////////////////////////3
  N = decimal_tree.length();
  a = MinValue(decimal_tree, N);
  b = MaxValue(decimal_tree, N);
  h = 1;
  hh = 0;
  QVector<double> x3(m), y3(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_tree[j] >= double(a) + hh and
          decimal_tree[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x3[i] = double(a) + hh + (h / 2);
    y3[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y3[i] > first_maxY)
      first_maxY = y3[i];
  }
  ui->tree->xAxis->setRange(0, 32);
  ui->tree->yAxis->setRange(0, first_maxY);
  QCPBars *barstree = new QCPBars(ui->tree->xAxis, ui->tree->yAxis);
  barstree->setData(x3, y3, true);
  barstree->setWidth(h);
  ui->tree->replot();

  ////////////////////////////////////////////4
  N = decimal_four.length();
  a = MinValue(decimal_four, N);
  b = MaxValue(decimal_four, N);
  h = 1;
  hh = 0;
  QVector<double> x4(m), y4(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_four[j] >= double(a) + hh and
          decimal_four[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x4[i] = double(a) + hh + (h / 2);
    y4[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y4[i] > first_maxY)
      first_maxY = y4[i];
  }
  ui->four->xAxis->setRange(0, 32);
  ui->four->yAxis->setRange(0, first_maxY);
  QCPBars *barsfour = new QCPBars(ui->four->xAxis, ui->four->yAxis);
  barsfour->setData(x4, y4, true);
  barsfour->setWidth(h);
  ui->four->replot();
  ////////////////////////////////////////////5
  N = decimal_five.length();
  a = MinValue(decimal_five, N);
  b = MaxValue(decimal_five, N);
  h = 1;
  hh = 0;
  QVector<double> x5(m), y5(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_five[j] >= double(a) + hh and
          decimal_five[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x5[i] = double(a) + hh + (h / 2);
    y5[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y5[i] > first_maxY)
      first_maxY = y5[i];
  }
  ui->five->xAxis->setRange(0, 32);
  ui->five->yAxis->setRange(0, first_maxY);
  QCPBars *barsfive = new QCPBars(ui->five->xAxis, ui->five->yAxis);
  barsfive->setData(x5, y5, true);
  barsfive->setWidth(h);
  ui->five->replot();
  ////////////////////////////////////////////6
  N = decimal_six.length();
  a = MinValue(decimal_six, N);
  b = MaxValue(decimal_six, N);
  h = 1;
  hh = 0;
  QVector<double> x6(m), y6(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_six[j] >= double(a) + hh and
          decimal_six[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x6[i] = double(a) + hh + (h / 2);
    y6[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y6[i] > first_maxY)
      first_maxY = y6[i];
  }
  ui->six->xAxis->setRange(0, 32);
  ui->six->yAxis->setRange(0, first_maxY);
  QCPBars *barssix = new QCPBars(ui->six->xAxis, ui->six->yAxis);
  barssix->setData(x6, y6, true);
  barssix->setWidth(h);
  ui->six->replot();

  ////////////////////////////////////////////7
  N = decimal_seven.length();
  a = MinValue(decimal_seven, N);
  b = MaxValue(decimal_seven, N);
  h = 1;
  hh = 0;
  QVector<double> x7(m), y7(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_seven[j] >= double(a) + hh and
          decimal_seven[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x7[i] = double(a) + hh + (h / 2);
    y7[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y7[i] > first_maxY)
      first_maxY = y7[i];
  }
  ui->seven->xAxis->setRange(0, 32);
  ui->seven->yAxis->setRange(0, first_maxY);
  QCPBars *barsseven = new QCPBars(ui->seven->xAxis, ui->seven->yAxis);
  barsseven->setData(x7, y7, true);
  barsseven->setWidth(h);
  ui->seven->replot();
  ////////////////////////////////////////////8
  N = decimal_eight.length();
  a = MinValue(decimal_eight, N);
  b = MaxValue(decimal_eight, N);
  h = 1;
  hh = 0;
  QVector<double> x8(m), y8(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (decimal_eight[j] >= double(a) + hh and
          decimal_eight[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x8[i] = double(a) + hh + (h / 2);
    y8[i] = ni;
    hh += h;
  }
  first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y8[i] > first_maxY)
      first_maxY = y8[i];
  }
  ui->eight->xAxis->setRange(0, 32);
  ui->eight->yAxis->setRange(0, first_maxY);
  QCPBars *barseight = new QCPBars(ui->eight->xAxis, ui->eight->yAxis);
  barseight->setData(x8, y8, true);
  barseight->setWidth(h);
  ui->eight->replot();
}

void MainWindow::on_pushButton_clicked() {
  ui->OFB->clearPlottables(); //очистка гистограмм
  ui->CPC->clearPlottables();
  ui->CFB->clearPlottables();
  ui->ECB->clearPlottables();

  ui->plot1->clearPlottables();
  ui->plot2->clearPlottables();
  ui->plot3->clearPlottables();
  ui->plot4->clearPlottables();

  ui->one->clearPlottables();
  ui->two->clearPlottables();
  ui->tree->clearPlottables();
  ui->four->clearPlottables();
  ui->five->clearPlottables();
  ui->six->clearPlottables();
  ui->seven->clearPlottables();
  ui->eight->clearPlottables();

  ui->textPlot->clearPlottables();

  ui->Round1->clear();
  ui->Round2->clear();
  ui->Round3->clear();
  ui->Round4->clear();
  ui->Round5->clear();
  ui->Round6->clear();
  ui->Round7->clear();
  ui->Round8->clear();

  QString text = ui->textEdit->toPlainText(); //ввод с окна
  QString k0 = ui->lineEdit_4->text();
  QString k1 = ui->lineEdit_3->text();
  QString p0 = ui->lineEdit->text();
  QString c0 = ui->lineEdit_2->text();

  QString key = ui->key->text(); //ввод с окна

  if (key == "") {
    // ui->key->setText("Сурьма косых глаз не исправит");
    // key="Сурьма косых глаз не исправит";

    ui->key->setText("Железный шпиц дома лежит");
    key = "Железный шпиц дома лежит";
  }
  if (ui->checkBox_3->isChecked())
    lab2(key, text);
  if (ui->checkBox_2->isChecked())
    lab3(text, key);

  int K0[5];
  int K1[5];
  int P0[5];
  int C0[5];
  ////////////////////////////////////////Перевод входных значений в int
  if (k0 == "" && k1 == "" && p0 == "" && c0 == "") {
    k0 = "10001";
    k1 = "00001";
    p0 = "00000";
    c0 = "11100";
    ui->lineEdit_4->setText(k0);
    ui->lineEdit_3->setText(k1);
    ui->lineEdit->setText(p0);
    ui->lineEdit_2->setText(c0);
  }
  if (k0.length() == 5) {
    for (int i = 0; i < 5; i++) {
      if (k0[i] == '0')
        K0[i] = 0;
      else if (k0[i] == '1')
        K0[i] = 1;
      else
        ui->lineEdit_4->setText("Ошибка ввода");
    }

  } else
    ui->lineEdit_4->setText("Ошибка ввода");
  if (k1.length() == 5) {
    for (int i = 0; i < 5; i++) {
      if (k1[i] == '0')
        K1[i] = 0;
      else if (k1[i] == '1')
        K1[i] = 1;
      else
        ui->lineEdit_3->setText("Ошибка ввода");
    }
  } else
    ui->lineEdit_3->setText("Ошибка ввода");

  if (p0.length() == 5) {
    for (int i = 0; i < 5; i++) {
      if (p0[i] == '0')
        P0[i] = 0;
      else if (p0[i] == '1')
        P0[i] = 1;
      else
        ui->lineEdit->setText("Ошибка ввода");
    }
  } else
    ui->lineEdit->setText("Ошибка ввода");

  if (c0.length() == 5) {
    for (int i = 0; i < 5; i++) {
      if (c0[i] == '0')
        C0[i] = 0;
      else if (c0[i] == '1')
        C0[i] = 1;
      else
        ui->lineEdit_2->setText("Ошибка ввода");
    }
  } else
    ui->lineEdit_2->setText("Ошибка ввода");
  ////////////////////////////////////////////////////////////Чтение и перевод
  ///в двоичный код текста
  QVector<int> bit_array;
  QVector<int> text_decimal;
  Word(text, bit_array);
  convertBinareDecimal(bit_array, text_decimal);
  QString out = "";
  int N = text_decimal.length();
  double h, hh = 0;
  double ni;
  int m = 32;
  double a, b;

  //////////////////////////////////////////////////////////// График Текста
  N = text_decimal.length();
  hh = 0;
  a = MinValue(text_decimal, N);
  b = MaxValue(text_decimal, N);
  h = 1;
  QVector<double> x0(m), y0(m);
  for (int i = 0; i < m; i++) {
    ni = 0;
    for (int j = 0; j < N; j++) {
      if (text_decimal[j] >= double(a) + hh and
          text_decimal[j] < double(a) + hh + h)
        ni++;
      else
        continue;
    }
    x0[i] = double(a) + hh + (h / 2);
    y0[i] = ni;
    hh += h;
  }
  double first_maxY = 1;
  for (int i = 0; i < m; i++) {
    if (y0[i] > first_maxY)
      first_maxY = y0[i];
  }
  ui->textPlot->xAxis->setRange(0, 32);
  ui->textPlot->yAxis->setRange(0, first_maxY);
  QCPBars *bars0 = new QCPBars(ui->textPlot->xAxis, ui->textPlot->yAxis);
  bars0->setData(x0, y0, true);
  bars0->setWidth(h);
  ui->textPlot->replot();

  if (ui->checkBox->isChecked()) {

    ////////////////////////////////////////////////////////////График ECB
    QVector<int> ECB_out_bit;
    QVector<int> ECB_out;
    ECB(bit_array, ECB_out_bit, K0, K1);
    convertBinareDecimal(ECB_out_bit, ECB_out);
    N = ECB_out.length();
    hh = 0;
    a = MinValue(ECB_out, N);
    b = MaxValue(ECB_out, N);
    h = 1;

    QVector<double> x1(m), y1(m);
    for (int i = 0; i < m; i++) {
      ni = 0;
      for (int j = 0; j < N; j++) {
        if (ECB_out[j] >= double(a) + hh and ECB_out[j] < double(a) + hh + h)
          ni++;
        else
          continue;
      }
      x1[i] = double(a) + hh + (h / 2);
      y1[i] = ni;
      hh += h;
    }
    ui->ECB->xAxis->setRange(0, 32);
    ui->ECB->yAxis->setRange(0, first_maxY);
    QCPBars *bars1 = new QCPBars(ui->ECB->xAxis, ui->ECB->yAxis);
    bars1->setData(x1, y1, true);
    bars1->setWidth(h);
    ui->ECB->replot();
    ///////////////////////////////////////////// График CPC
    QVector<int> CPC_out_bit;
    QVector<int> CPC_out;
    CPC(bit_array, CPC_out_bit, C0);
    convertBinareDecimal(CPC_out_bit, CPC_out);

    N = CPC_out.length();
    hh = 0;
    a = MinValue(CPC_out, N);
    b = MaxValue(CPC_out, N);
    h = 1;
    QVector<double> x2(m), y2(m);
    for (int i = 0; i < m; i++) {
      ni = 0;
      for (int j = 0; j < N; j++) {
        if (CPC_out[j] >= double(a) + hh and CPC_out[j] < double(a) + hh + h)
          ni++;
        else
          continue;
      }
      x2[i] = double(a) + hh + (h / 2);
      y2[i] = ni;
      hh += h;
    }
    ui->CPC->xAxis->setRange(0, 32);
    ui->CPC->yAxis->setRange(0,
                             first_maxY); //сюда надо вставить максимальное h
    QCPBars *bars2 = new QCPBars(ui->CPC->xAxis, ui->CPC->yAxis);
    bars2->setData(x2, y2, true);
    bars2->setWidth(h);
    ui->CPC->replot();
    ////////////////////////////////////////////////////////////График OFB
    QVector<int> OFB_out_bit;
    QVector<int> OFB_out;
    OFB(bit_array, OFB_out_bit, C0, P0);
    convertBinareDecimal(OFB_out_bit, OFB_out);

    N = OFB_out.length();
    hh = 0;
    a = MinValue(OFB_out, N);
    b = MaxValue(OFB_out, N);
    h = 1;
    QVector<double> x3(m), y3(m);
    for (int i = 0; i < m; i++) {
      ni = 0;
      for (int j = 0; j < N; j++) {
        if (OFB_out[j] >= double(a) + hh and OFB_out[j] < double(a) + hh + h)
          ni++;
        else
          continue;
      }
      x3[i] = double(a) + hh + (h / 2);
      y3[i] = ni;
      hh += h;
    }
    ui->OFB->xAxis->setRange(0, 32);
    ui->OFB->yAxis->setRange(0, first_maxY);
    QCPBars *bars3 = new QCPBars(ui->OFB->xAxis, ui->OFB->yAxis);
    bars3->setData(x3, y3, true);
    bars3->setWidth(h);
    ui->OFB->replot();
    ////////////////////////////////////////////////////////////График CFB
    QVector<int> CFB_out_bit;
    QVector<int> CFB_out;
    CFB(bit_array, CFB_out_bit, C0);
    convertBinareDecimal(CFB_out_bit, CFB_out);

    N = CFB_out.length();
    hh = 0;
    a = MinValue(CFB_out, N);
    b = MaxValue(CFB_out, N);
    h = 1;
    QVector<double> x4(m), y4(m);
    for (int i = 0; i < m; i++) {
      ni = 0;
      for (int j = 0; j < N; j++) {
        if (CFB_out[j] >= double(a) + hh and CFB_out[j] < double(a) + hh + h)
          ni++;
        else
          continue;
      }
      x4[i] = double(a) + hh + (h / 2);
      y4[i] = ni;
      hh += h;
    }
    ui->CFB->xAxis->setRange(0, 32);
    ui->CFB->yAxis->setRange(0, first_maxY);
    QCPBars *bars4 = new QCPBars(ui->CFB->xAxis, ui->CFB->yAxis);
    bars4->setData(x4, y4, true);
    bars4->setWidth(h);
    ui->CFB->replot();
  }
}
