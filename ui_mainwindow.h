/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QFormLayout *formLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QLabel *label_8;
    QLineEdit *lineEdit_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_11;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLineEdit *lineEdit_8;
    QLabel *label_14;
    QLineEdit *lineEdit_9;
    QLabel *label_15;
    QLineEdit *lineEdit_10;
    QLabel *label_16;
    QLineEdit *lineEdit_11;
    QLabel *label_17;
    QLineEdit *lineEdit_12;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QTextBrowser *textBrowser;
    QCustomPlot *qt1;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *textBrowser_2;
    QCustomPlot *qt2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QTextBrowser *textBrowser_3;
    QCustomPlot *qt3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(926, 933);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #EAFFD0"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Aero Matics"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: #F38181"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Aero Matics"));
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(200, 16777215));
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: #FCE38A;\n"
"\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));
        lineEdit_2->setFont(font);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(200, 16777215));
        lineEdit_3->setFont(font);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(200, 16777215));
        lineEdit_4->setFont(font);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);


        horizontalLayout->addLayout(formLayout);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(200, 16777215));
        lineEdit_5->setFont(font);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_5);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(200, 16777215));
        lineEdit_6->setFont(font);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_6);


        horizontalLayout->addLayout(formLayout_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout_4->addWidget(label_11);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        lineEdit_8 = new QLineEdit(centralwidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setFont(font);
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEdit_8);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        lineEdit_9 = new QLineEdit(centralwidget);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setFont(font);
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEdit_9);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        lineEdit_10 = new QLineEdit(centralwidget);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setFont(font);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEdit_10);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        lineEdit_11 = new QLineEdit(centralwidget);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setFont(font);
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, lineEdit_11);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_17);

        lineEdit_12 = new QLineEdit(centralwidget);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setFont(font);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, lineEdit_12);


        verticalLayout_4->addLayout(formLayout_3);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(200, 200));
        textBrowser->setMaximumSize(QSize(200, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Aero Matics"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        textBrowser->setFont(font2);
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_2->addWidget(textBrowser);

        qt1 = new QCustomPlot(centralwidget);
        qt1->setObjectName(QString::fromUtf8("qt1"));
        qt1->setMinimumSize(QSize(700, 200));
        qt1->setMaximumSize(QSize(16777215, 16777215));
        qt1->setFont(font);
        qt1->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_2->addWidget(qt1);


        verticalLayout->addLayout(horizontalLayout_2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        verticalLayout->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(200, 200));
        textBrowser_2->setMaximumSize(QSize(200, 16777215));
        textBrowser_2->setFont(font2);
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_3->addWidget(textBrowser_2);

        qt2 = new QCustomPlot(centralwidget);
        qt2->setObjectName(QString::fromUtf8("qt2"));
        qt2->setMinimumSize(QSize(700, 200));
        qt2->setMaximumSize(QSize(16777215, 16777215));
        qt2->setFont(font);
        qt2->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_3->addWidget(qt2);


        verticalLayout->addLayout(horizontalLayout_3);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        verticalLayout->addWidget(label_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setMinimumSize(QSize(200, 200));
        textBrowser_3->setMaximumSize(QSize(200, 16777215));
        textBrowser_3->setFont(font2);
        textBrowser_3->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_4->addWidget(textBrowser_3);

        qt3 = new QCustomPlot(centralwidget);
        qt3->setObjectName(QString::fromUtf8("qt3"));
        qt3->setMinimumSize(QSize(700, 200));
        qt3->setMaximumSize(QSize(16777215, 16777215));
        qt3->setFont(font);
        qt3->setStyleSheet(QString::fromUtf8("background-color: #FCE38A"));

        horizontalLayout_4->addWidget(qt3);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #95E1D3"));

        verticalLayout->addWidget(pushButton);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 926, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">a(5):</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">c(3):</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\230\320\275\321\202\320\265\321\200\320\262\320\260\320\273 (m):</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\232\320\276\320\273-\320\262\320\276 \321\207\320\270\321\201\320\265\320\273(N):</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">p (131):</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">q (47):</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\276\320\273\320\270\320\275\320\276\320\274:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "x^4 (1)", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "x^3 (1)", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "x^2 (0)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "x (1)", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "b (1)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\265 \320\272\320\276\320\275\320\263\321\200\321\203\321\215\320\275\321\202\320\275\321\213\320\271 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 </span><span style=\" font-size:18pt; font-style:italic;\">X </span><span style=\" font-size:18pt; font-style:italic; vertical-align:sub;\">n + 1 </span><span style=\" font-size:18pt; font-style:italic;\">= (a X </span><span style=\" font-size:18pt; font-style:italic; vertical-align:sub;\">n</span><span style=\" font-size:18pt; font-style:italic;\"> + c) mod m</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\277\321\201\320\265\320\262\320\264\320\276\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 BBS  </span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt;\">\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\274 \321\200\320\265\320\272\321\203\321\200\321\200\320\265\320\275\321\202\320\275\321\213\320\274 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\274 (LFSR) </span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
