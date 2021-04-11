#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::bin(int n, QVector<int> &bit_array) //функция перевода числа в двоичную систему счисления
{
     for(int i=4;i>=0; i--)
     {
             bit_array.push_back(n % 2);
             n=n/2;
             }
}

void MainWindow::Word(QString str,QVector<int> &bit_array) // функция перевода строки в двоичный код
{
    int * arr_num= new int [str.length()];
    QString smal[33]={"а","б","в","г","д","e","ё","ж","з","и","й","к","л","м","н","о","п","р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я"};
    QString big[33] ={"А","Б","В","Г","Д","Е","Ё","Ж","З","И","Й","К","Л","М","Н","О","П","Р","С","Т","У","Ф","Х","Ц","Ч","Ш","Щ","Ъ","Ы","Ь","Э","Ю","Я"};
    for(int i=0;i<str.length();i++) //перебор символов и запись их в вектор двоичных чисел
    {
        for(int j=0;j<33;j++)
        {
            if(str[i]==smal[j])
            {
                arr_num[i]=j+1;
                bin(arr_num[i],bit_array);
            }else if(str[i]==big[j])
            {
                arr_num[i]=j+1;
                bin(arr_num[i],bit_array);
            }
        }
    }
    delete [] arr_num;
}

void MainWindow::on_pushButton_clicked()
{

    QString text = ui->textEdit->toPlainText();
    QString k0 = ui->lineEdit_4->text();
    QString k1 = ui->lineEdit_3->text();
    QString po = ui->lineEdit->text();
    QString co = ui->lineEdit_4->text();

    int K0[5];
    int K1[5];
    int P0[5];
    int C0[5];

    QVector<int> bit_array;
    Word(text,bit_array);
    QString out="";
    for(int i=0; i<bit_array.length();i++) out+= QString::number(bit_array[i])+" ";


    ui->debug->setText(out);
}
