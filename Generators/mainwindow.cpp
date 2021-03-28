#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qcustomplot.h"
#include <cmath>
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textBrowser->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::gcd(int x, int y) //проверка на взаимнопростые числа
{
    return y ? gcd(y,x%y) : x;
}

bool MainWindow::isPrime(int n)
{
    // если n > 1
    if (n > 1)
    {
        // в цикле перебираем числа от 2 до n - 1
        for (int i = 2; i < n; i++)
            if (n % i == 0) // если n делится без остатка на i - возвращаем false (число не простое)
                return false;

        // если программа дошла до данного оператора, то возвращаем true (число простое) - проверка пройдена
        return true;
    }
    else // иначе возвращаем false (число не простое)
        return false;
}

QString MainWindow::GenerateLCP(int *arrayLCP,int A,int B,int M,int N,QString str)
{
    CheckLCP(A,B,M,str);
    int X0;
    X0=0;
    arrayLCP[0]=X0;
    str=str+"X0= "+ QString::number(arrayLCP[0])+"\n";
        for(int i=1;i<N;i++)
        {
        arrayLCP[i]=(X0 * A + B) % M;
        X0=arrayLCP[i];
        str=str + "X"+ QString::number(i) + "= "+ QString::number(arrayLCP[i])+"\n";
        }
    return str;
}
void MainWindow::CheckLCP(int A,int B,int M,QString &str)
{
    // 1) если B и M являются взаимнопростыми
    // 2) A-1 должно делиться на все простые делители m
    // 3) если m кратно четырём, то и А-1 кратно четырём
    if(gcd(B,M)!=1) str=str+"Отсутсвие переодичности" + "\n" + "Числа B и M не являются взаимнопросытми!"+"\n";
    if((M%4==0 && (A-1)%4) || M%4!=0)
    {
      QVector<int> deliteli_M;
      for(int i=M;i>0;i--)
      {
          if(M%i==0 and isPrime(i))
          {
               deliteli_M.push_back(i);
          }
      }
      for(int i=0;i<deliteli_M.size();i++)
      {
          if((A-1)<deliteli_M[i]) continue;
          if(deliteli_M[i]%(A-1)==0) continue;
          else str=str+"Отсутсвие переодичности" + "\n" + "Не выполняется условие: Делимость А-1 на все простые делители M" +"\n";
      }
}
    else str=str+"Отсутсвие переодичности" + "\n" + "Не выполняется условие кратности где если M кратно 4, то и А-1 должно быть кратно 4"+ "\n";
}

double MainWindow::MaxValue(int * gen,int n)
{
    double max=gen[0];
    for(int i=1;i<n;i++)
    {
        if (gen[i] > max) max = gen[i];

    }
    return max;
}
double MainWindow::MinValue(int * gen,int n)
{
    double min=gen[0];
    for(int i=1;i<n;i++)
    {
        if(gen[i] < min) min = gen[i];

    }
    return min;
}

bool MainWindow::CheckBBS(QString &str,int p,int q)
{
    if(isPrime(p) && p%4==3 && isPrime(q) && q%4==3)
    {
        return true;
    }else return false;


}

QString MainWindow::GenerateBBS(int *arrayBBS,int p,int q,int N,int M)
{
    //должен преобразовывать в двоичный код, делиться на биты по кол-ву символов и преобразовавыться в число
    srand(time(NULL));
    QString str="";
    int buf_counter;
    int sum_binare;
    if(CheckBBS(str,p,q))
    {
        int m = p * q;
        int x;
        do
        {
            x =rand() % m;

        }while(gcd(x,m)!=1);
        for(int j = 0;j<N;j++)
        {
            sum_binare=0;
        for(int i = 0;i <= ceil(log(M));i++)
        {
            buf_counter=(x*x) % m;
            x=buf_counter;
            buf_counter%=2;
            sum_binare+=buf_counter * pow(2,i);
            //str=str+"X"+QString::number(i)+"= "+QString::number(sum_binare)+"\n";
        }
        arrayBBS[j]=sum_binare;
        str=str+"X"+QString::number(j)+"= "+QString::number(arrayBBS[j])+"\n";
        }
       return str;
    }else return str=str+"Выбраные значени p и q не подходят!";
}

void MainWindow::MatrixMultiplication(int (&A_matr)[5][5],int *x0,int *x_func)
{
    int sum;
    for(int i = 0;i<5;i++)
    {
        sum=0;
        for(int j=0;j<5;j++)
        {
            sum+=A_matr[i][j] * x0[j];
        }
        x_func[i]=sum;
    }
}

QString MainWindow::GenerateLFSR(int *arrayLFSR,int (&A_matr)[5][5],int N,QString str)
{
    int x0[5]={1,0,0,0,0};
    int x_func[5];
    int sum_binare;
    for(int i=0;i<N;i++)
    {
        MatrixMultiplication(A_matr,x0,x_func);
        for(int count=0;count<5;count++)
        {
            x0[count]=x_func[count];
            x0[count]%=2;
        }
        sum_binare=0;
        for(int j=4,k=0;k<5;j--,k++)
        {
            sum_binare+=x0[j] * pow(2,k);
        }
        arrayLFSR[i]=sum_binare;
        str=str+"X"+QString::number(i)+"= "+QString::number(arrayLFSR[i])+"\n";
    }
    return str;
}

void MainWindow::on_pushButton_clicked()
{
/////////////////////////////////////////////////////////////////////////////////////////////////
   ui->qt1->clearPlottables();
   ui->qt2->clearPlottables();
   ui->qt3->clearPlottables();
   int A = ui->lineEdit->text().toInt();
   int B = ui->lineEdit_2->text().toInt();
   int M = ui->lineEdit_3->text().toInt();
   int N = ui->lineEdit_4->text().toInt();
   int *arrayLCP = new int[N];
   QString strLCP;
   ui->textBrowser->setText(GenerateLCP(arrayLCP,A,B,M,N,strLCP));
   double h,hh=0;
   double ni;
   int m = 1+3.22*log(N);
   double a,b;
   a=MinValue(arrayLCP,N);
   b=MaxValue(arrayLCP,N);
   h = double(b-a)/m;

   QVector<double> x1(m), y1(m);
   for (int i=0; i<m; i++)
       {
         ni=0;
         for(int j = 0; j<N;j++)
         {
       if(arrayLCP[j] >= double(a)+hh and arrayLCP[j] < double(a)+hh+h) ni++;
            else continue;
         }
          x1[i] = double(a)+hh+(h/2);
          y1[i] = ni/(N*h);
          hh+=h;
         }
   double first_maxY=a,first_minY=b;
   for(int i=0; i<m; i++)
           {
               if(y1[i]>first_maxY) first_maxY = y1[i];
               if(y1[i]<first_minY) first_minY = y1[i];
           }
       ui->qt1->xAxis->setRange(0,M+1);
       ui->qt1->yAxis->setRange(0,first_maxY+first_minY+0.01); //сюда надо вставить максимальное h
   QCPBars *bars1 = new QCPBars(ui->qt1->xAxis, ui->qt1->yAxis);
   bars1->setData(x1, y1,true);
   bars1->setWidth(h);
   ui->qt1->replot();
   delete [] arrayLCP;
/////////////////////////////////////////////////////////////////////////////////////////////////
   int p = ui->lineEdit_5->text().toInt();
   int q = ui->lineEdit_6->text().toInt();
   int *arrayBBS = new int[N];
   ui->textBrowser_2->setText(GenerateBBS(arrayBBS,p,q,N,M));
   hh=0;
   m = 1+3.22*log(N);
   a=MinValue(arrayBBS,N);
   b=MaxValue(arrayBBS,N);
   h = double(b-a)/m;

   QVector<double> x2(m), y2(m);
   for (int i=0; i<m; i++)
       {
         ni=0;
         for(int j = 0; j<N;j++)
         {
       if(arrayBBS[j] >= double(a)+hh and arrayBBS[j] < double(a)+hh+h) ni++;
            else continue;
         }
          x2[i] = double(a)+hh+(h/2);
          y2[i] = ni/(N*h);
          hh+=h;
         }
   ui->qt2->xAxis->setRange(0,M+1);
   ui->qt2->yAxis->setRange(0,first_maxY+first_minY+0.01);

   QCPBars *bars2 = new QCPBars(ui->qt2->xAxis, ui->qt2->yAxis);
   bars2->setData(x2, y2,true);
   bars2->setWidth(h);
   ui->qt2->replot();
   delete [] arrayBBS;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   int X4 = ui->lineEdit_8->text().toInt();
   int X3 = ui->lineEdit_9->text().toInt();
   int X2 = ui->lineEdit_10->text().toInt();
   int X1 = ui->lineEdit_11->text().toInt();
   int X0 = ui->lineEdit_12->text().toInt();

   int A_matr[5][5]={
       {X4,X3,X2,X1,X0},
       {1,0,0,0,0},
       {0,1,0,0,0},
       {0,0,1,0,0},
       {0,0,0,1,0},
   };
   int *arrayLFSR=new int [N];
   QString strLFSR;
   ui->textBrowser_3->setText(GenerateLFSR(arrayLFSR,A_matr,N,strLFSR));
   hh=0;
   m = 1+3.22*log(N);
   a=MinValue(arrayLFSR,N);
   b=MaxValue(arrayLFSR,N);
   h = double(b-a)/m;

   QVector<double> x3(m), y3(m);
   for (int i=0; i<m; i++)
       {
         ni=0;
         for(int j = 0; j<N;j++)
         {
       if(arrayLFSR[j] >= double(a)+hh and arrayLFSR[j] < double(a)+hh+h) ni++;
            else continue;
         }
          x3[i] = double(a)+hh+(h/2);
          y3[i] = ni/(N*h);
          hh+=h;
         }
   ui->qt3->xAxis->setRange(0,M+1);
   ui->qt3->yAxis->setRange(0,first_maxY+first_minY+0.01);
   QCPBars *bars3 = new QCPBars(ui->qt3->xAxis, ui->qt3->yAxis);
   bars3->setData(x3, y3,true);
   bars3->setWidth(h);
   ui->qt3->replot();
   delete [] arrayLFSR;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
