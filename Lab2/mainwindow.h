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

    void Word(QString str, QVector<int> &bit_arr);

    void bin(int n,QVector<int> &bit_arr);

    void invertLastBit(QVector<int> &out_bit);

    void invertBit(QVector<int> &out_bit,int i);

    double MinValue(QVector<int> &gen,int n);

    double MaxValue(QVector<int> &gen,int n);

    void sumArray(int* arr1,int *arr2,int *result);

    void sum(QVector<int> &out_bit,int *buf_array,int *K);

    void ECB(QVector<int> &bit_array,QVector<int> &ECB_out_bit,int *K0,int *K1);

    void CPC(QVector<int> &bit_array,QVector<int> &CPC_out_bit,int *C0);

    void OFB(QVector<int> &bit_array,QVector<int> &OFB_out_bit,int *C0,int *P0);

    void CFB(QVector<int> &bit_array,QVector<int> &OFB_out_bit,int *C0);

    void createNewAlph(QString text,QString *alph);

    bool checkWordInArray(int idexText,  QString key, QString *arrayText);

    bool checkWordInAlph(int indexAlph, QString *alph, QString *arrayText);

    QString translateText(QString key,QString *alph);

    void createNewAlphConstant(QString *alph);

    void lab2(QString key,QString text);

    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
