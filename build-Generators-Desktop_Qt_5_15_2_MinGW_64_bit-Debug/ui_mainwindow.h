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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(200, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_4);


        horizontalLayout->addLayout(formLayout);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setMaximumSize(QSize(200, 16777215));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_5);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_6 = new QLineEdit(centralwidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(200, 16777215));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_6);


        horizontalLayout->addLayout(formLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setMinimumSize(QSize(200, 243));
        textBrowser->setMaximumSize(QSize(200, 1000));

        horizontalLayout_2->addWidget(textBrowser);

        qt1 = new QCustomPlot(centralwidget);
        qt1->setObjectName(QString::fromUtf8("qt1"));
        qt1->setMinimumSize(QSize(700, 200));
        qt1->setMaximumSize(QSize(500, 500));

        horizontalLayout_2->addWidget(qt1);


        verticalLayout->addLayout(horizontalLayout_2);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(200, 200));
        textBrowser_2->setMaximumSize(QSize(200, 1000));

        horizontalLayout_3->addWidget(textBrowser_2);

        qt2 = new QCustomPlot(centralwidget);
        qt2->setObjectName(QString::fromUtf8("qt2"));
        qt2->setMinimumSize(QSize(700, 200));
        qt2->setMaximumSize(QSize(500, 500));

        horizontalLayout_3->addWidget(qt2);


        verticalLayout->addLayout(horizontalLayout_3);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setMinimumSize(QSize(200, 200));
        textBrowser_3->setMaximumSize(QSize(200, 1000));

        horizontalLayout_4->addWidget(textBrowser_3);

        qt3 = new QCustomPlot(centralwidget);
        qt3->setObjectName(QString::fromUtf8("qt3"));
        qt3->setMinimumSize(QSize(700, 200));
        qt3->setMaximumSize(QSize(5000, 16777215));

        horizontalLayout_4->addWidget(qt3);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

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
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "m", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "p (563)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "q (587)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\265 \320\272\320\276\320\275\320\263\321\200\321\203\321\215\320\275\321\202\320\275\321\213\320\271 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 <span style=\" font-style:italic;\">X </span><span style=\" font-style:italic; vertical-align:sub;\">n + 1 </span><span style=\" font-style:italic;\">= (a X </span><span style=\" font-style:italic; vertical-align:sub;\">n</span><span style=\" font-style:italic;\"> + c) mod m</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\260 \320\277\321\201\320\265\320\262\320\264\320\276\321\201\320\273\321\203\321\207\320\260\320\271\320\275\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 BBS  ", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\265\320\271\320\275\321\213\320\274 \321\200\320\265\320\272\321\203\321\200\321\200\320\265\320\275\321\202\320\275\321\213\320\274 \320\263\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200\320\276\320\274 (LFSR) ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
