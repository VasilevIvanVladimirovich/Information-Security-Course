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
    double MaxValue(int * gen,int n);
    double MinValue(int * gen,int n);
    int gcd(int x, int y);
    bool isPrime(int n);
private slots:
    void on_pushButton_clicked();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
