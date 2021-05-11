#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"

QString debug="";

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::bin(int n, QVector<int> &bit_array) //функция перевода числа в двоичную систему счисления
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
        if (gen[i] > max) max = gen[i];

    }
    return max;
}

double MainWindow::MinValue(QVector<int> &gen, int n) {
    double min = gen[0];
    for (int i = 1; i < n; i++) {
        if (gen[i] < min) min = gen[i];

    }
    return min;
}

void MainWindow::Word(QString str, QVector<int> &bit_array) // функция перевода строки в двоичный код
{
    int *arr_num = new int[str.length()];
    QString smal[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и", "й", "к", "л", "м", "н", "о", "п", "р", "с", "т",
                        "у", "ф", "х", "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};
    QString big[32] = {"А", "Б", "В", "Г", "Д", "Е", "Ж", "З", "И", "Й", "К", "Л", "М", "Н", "О", "П", "Р", "С", "Т",
                       "У", "Ф", "Х", "Ц", "Ч", "Ш", "Щ", "Ъ", "Ы", "Ь", "Э", "Ю", "Я"};
    for (int i = 0; i < str.length(); i++) //перебор символов и запись их в вектор двоичных чисел
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
    if (out_bit.back() == 0) back = 1;
    else if (out_bit.back() == 1) back = 0;
    out_bit.pop_back();
    out_bit.push_back(back);
}

void MainWindow::sum(QVector<int> &out_bit, int *buf_array, int *K) {
    for (int i = 0; i < 5; i++) {
        if ((buf_array[i] == 1 && K[i] == 1) || (buf_array[i] == 0 && K[i] == 0)) out_bit.push_back(0);
        if ((buf_array[i] == 1 && K[i] == 0) || (buf_array[i] == 0 && K[i] == 1)) out_bit.push_back(1);
    }
}

void MainWindow::ECB(QVector<int> &bit_array, QVector<int> &ECB_out_bit, int *K0, int *K1) {
    int buf_array[5];
    for (int i = 0; i < bit_array.length(); i += 5) {
        for (int j = 0; j < 5; j++) {
            buf_array[j] = bit_array[j + i];
        }
        if (buf_array[4] == 0) sum(ECB_out_bit, buf_array, K0); //P1+K
        else sum(ECB_out_bit, buf_array, K1);
        invertLastBit(ECB_out_bit);
    }
}

void convertBinareDecimal(QVector<int> &out_bit, QVector<int> &ECB_out) {
    int sum;
    for (int i = 0; i < out_bit.length(); i += 5) {
        sum = 0;
        for (int j = 4, k = 0; j >= 0; j--, k++) {
            if (out_bit[i + k] == 1) sum += pow(2, j);

        }
        ECB_out.push_back(sum);
    }
}

void MainWindow::CPC(QVector<int> &bit_array, QVector<int> &CPC_out_bit, int *C0) {
    int C[5];
    for (int i = 0; i < 5; i++) C[i] = C0[i];
    int buf[5];
    for (int i = 0; i < bit_array.length(); i += 5) {
        for (int j = 0; j < 5; j++) {
            buf[j] = bit_array[i + j];
        }
        sum(CPC_out_bit, buf, C); //P1+C0
        if (CPC_out_bit[i] == 0) CPC_out_bit[i] = 1;
        else if (CPC_out_bit[i] == 1) CPC_out_bit[i] = 0;
        for (int k = 0; k < 5; k++) C[k] = CPC_out_bit[k + i];
    }
}

void MainWindow::sumArray(int *arr1, int *arr2, int *result) {
    for (int i = 0; i < 5; i++) {
        if ((arr1[i] == 1 && arr2[i] == 1) || (arr1[i] == 0 && arr2[i] == 0)) result[i] = 0;
        if ((arr1[i] == 1 && arr2[i] == 0) || (arr1[i] == 0 && arr2[i] == 1)) result[i] = 1;
    }
}

void MainWindow::OFB(QVector<int> &bit_array, QVector<int> &OFB_out_bit, int *C0, int *P0) {
    int buf_sum[5];
    int bin_word[5];
    int C[5];
    int P[5];
    for (int i = 0; i < 5; i++) C[i] = C0[i];
    for (int i = 0; i < 5; i++) P[i] = P0[i];

    for (int i = 0; i < bit_array.length(); i += 5) {
        for (int j = 0; j < 5; j++) bin_word[j] = bit_array[i + j];
        sumArray(C, P, buf_sum);        //C0+P0
        sumArray(bin_word, buf_sum, C); //P1+(C0+P0)
        if (C[4] == 0) C[4] = 1;
        else if (C[4] == 1) C[4] = 0;
        for (int j = 0; j < 5; j++) P[j] = bin_word[j];
        for (int j = 0; j < 5; j++) OFB_out_bit.push_back(C[j]);
    }
}

void MainWindow::CFB(QVector<int> &bit_array, QVector<int> &OFB_out_bit, int *C0) {
    int C[5];
    int buf[5];
    for (int i = 0; i < 5; i++) C[i] = C0[i];
    if (C[0] == 0) C[0] = 1;
    else if (C[0] == 1) C[0] = 0;
    for (int i = 0; i < bit_array.length(); i += 5) {
        for (int j = 0; j < 5; j++) buf[j] = bit_array[i + j];
        sum(OFB_out_bit, buf, C);  //P1+С0
        invertLastBit(OFB_out_bit);
        for (int j = 0; j < 5; j++) C[j] = OFB_out_bit[i + j];
    }
}

bool MainWindow::checkWordInArray(int idexText,  QString text, QString *arrayText)
{
    for(int i=0;i<16;i++)
    {
        if(text[idexText]==arrayText[i] || text[idexText]==" ") return false;
    }
    return true;
}

bool MainWindow::checkWordInAlph(int indexAlph,QString *alph, QString *arrayText)
{
    for(int i = 0; i<16;i++)
    {
        if(alph[indexAlph]==arrayText[i]) return false;
    }
    return true;
}

void MainWindow::createNewAlph(QString text,QString *alph)
{
    QString arrayText[16]={0};
    QString arrayLast[16]={0};
    QString lastWord;
    for(int idexText=0, indexArrey=0; indexArrey<16; idexText++) // алгоритм заполнения верхнего массива (текстового по ключу)
    {
            if(checkWordInArray(idexText,text,arrayText))
            {
                arrayText[indexArrey] = text[idexText];
                indexArrey++;

        }
    }
    for(int indexAlph=0,ind=0;indexAlph<32 && ind<17;indexAlph++)  // алгоритм заполнения нижнего массива (оставшиеся пары)
    {
       if(checkWordInAlph(indexAlph,alph,arrayText))
       {
           arrayLast[ind] = alph[indexAlph];
           ind++;
       }else continue;
    }
bool exit=false;
  for(int indexAlph=0;indexAlph<32;indexAlph++)
    {
      exit=false;
      for(int i = 0;i<16;i++)
      {
          if(alph[indexAlph]==arrayText[i])
          {
              alph[indexAlph] = arrayLast[i];
              exit=true;
              break;
          }
      }
      if(exit) continue;
        for(int i = 0;i<16;i++)
        {
            if(alph[indexAlph]==arrayLast[i])
            {
                alph[indexAlph] = arrayText[i];
                break;
            }
        }

    }

}

void MainWindow::lab2(QString text)
{
    QString alph[32] = {"а", "б", "в", "г", "д", "е", "ж", "з", "и","й","к", "л", "м", "н", "о", "п", "р", "с", "т",
                        "у", "ф", "х", "ц", "ч", "ш", "щ", "ъ", "ы", "ь", "э", "ю", "я"};
    text.toLower();
    createNewAlph(text,alph);

    ui->debugedit->setText(debug);
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

    ui->textPlot->clearPlottables();
    ui->textEdit->setText("железный шпиц дома лежит");
    QString text = ui->textEdit->toPlainText(); //ввод с окна
    QString k0 = ui->lineEdit_4->text();
    QString k1 = ui->lineEdit_3->text();
    QString p0 = ui->lineEdit->text();
    QString c0 = ui->lineEdit_2->text();

    lab2(text);

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
            if (k0[i] == '0') K0[i] = 0;
            else if (k0[i] == '1') K0[i] = 1;
            else ui->lineEdit_4->setText("Ошибка ввода");
        }

    } else ui->lineEdit_4->setText("Ошибка ввода");
    if (k1.length() == 5) {
        for (int i = 0; i < 5; i++) {
            if (k1[i] == '0') K1[i] = 0;
            else if (k1[i] == '1') K1[i] = 1;
            else ui->lineEdit_3->setText("Ошибка ввода");
        }
    } else ui->lineEdit_3->setText("Ошибка ввода");

    if (p0.length() == 5) {
        for (int i = 0; i < 5; i++) {
            if (p0[i] == '0') P0[i] = 0;
            else if (p0[i] == '1') P0[i] = 1;
            else ui->lineEdit->setText("Ошибка ввода");
        }
    } else ui->lineEdit->setText("Ошибка ввода");

    if (c0.length() == 5) {
        for (int i = 0; i < 5; i++) {
            if (c0[i] == '0') C0[i] = 0;
            else if (c0[i] == '1') C0[i] = 1;
            else ui->lineEdit_2->setText("Ошибка ввода");
        }
    } else ui->lineEdit_2->setText("Ошибка ввода");
////////////////////////////////////////////////////////////Чтение и перевод в двоичный код текста
    QVector<int> bit_array;
    QVector<int> text_decimal;
    Word(text, bit_array);
    convertBinareDecimal(bit_array, text_decimal);
    QString out = "";


////////////////////////////////////////////////////////////График ECB
    QVector<int> ECB_out_bit;
    QVector<int> ECB_out;
    ECB(bit_array, ECB_out_bit, K0, K1);
    convertBinareDecimal(ECB_out_bit, ECB_out);
    int N = ECB_out.length();
    double h, hh = 0;
    double ni;
    int m = 32;
    double a, b;
    a = MinValue(ECB_out, N);
    b = MaxValue(ECB_out, N);
    h = 1;

    QVector<double> x1(m), y1(m);
    for (int i = 0; i < m; i++) {
        ni = 0;
        for (int j = 0; j < N; j++) {
            if (ECB_out[j] >= double(a) + hh and ECB_out[j] < double(a) + hh + h) ni++;
            else continue;

        }
        x1[i] = double(a) + hh + (h / 2);
        y1[i] = ni;
        hh += h;
    }
    double first_maxY = 1;
    for (int i = 0; i < m; i++) {
        if (y1[i] > first_maxY) first_maxY = y1[i];
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
            if (CPC_out[j] >= double(a) + hh and CPC_out[j] < double(a) + hh + h) ni++;
            else continue;
        }
        x2[i] = double(a) + hh + (h / 2);
        y2[i] = ni;
        hh += h;
    }
    ui->CPC->xAxis->setRange(0, 32);
    ui->CPC->yAxis->setRange(0, first_maxY); //сюда надо вставить максимальное h
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
            if (OFB_out[j] >= double(a) + hh and OFB_out[j] < double(a) + hh + h) ni++;
            else continue;
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
            if (CFB_out[j] >= double(a) + hh and CFB_out[j] < double(a) + hh + h) ni++;
            else continue;
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
            if (text_decimal[j] >= double(a) + hh and text_decimal[j] < double(a) + hh + h) ni++;
            else continue;
        }
        x0[i] = double(a) + hh + (h / 2);
        y0[i] = ni;
        hh += h;
    }
    ui->textPlot->xAxis->setRange(0, 32);
    ui->textPlot->yAxis->setRange(0, first_maxY);
    QCPBars *bars0 = new QCPBars(ui->textPlot->xAxis, ui->textPlot->yAxis);
    bars0->setData(x0, y0, true);
    bars0->setWidth(h);
    ui->textPlot->replot();
}
