#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void CheckLCP(int A,int B,int M,QString &str);
    bool CheckBBS(QString &str,int p,int q);
    QString GenerateLCP(int *arrayLCP,int A,int B,int M,int N,QString str);
    QString GenerateBBS(int *arrayBBS,int p,int q,int N,int M);
    QString GenerateLFSR(int *arrayLFSR,int (&A_matr)[5][5],int N,QString str);
    double MaxValue(int * gen,int n);
    double MinValue(int * gen,int n);
    void MatrixMultiplication(int (&A_matr)[5][5],int *x0,int *x_func);
    int gcd(int x, int y);
    bool isPrime(int n);
private slots:
    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
