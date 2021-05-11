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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *Text;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *lineEdit_3;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QFormLayout *formLayout;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_7;
    QLineEdit *lineEdit_2;
    QTextEdit *debugedit;
    QLabel *label_10;
    QCustomPlot *textPlot;
    QPushButton *pushButton;
    QWidget *lab2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_11;
    QCustomPlot *plot1;
    QLabel *label_13;
    QCustomPlot *plot3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_12;
    QCustomPlot *plot2;
    QLabel *label_14;
    QCustomPlot *plot4;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_5;
    QCustomPlot *OFB;
    QLabel *label_3;
    QCustomPlot *CPC;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QCustomPlot *ECB;
    QLabel *label_4;
    QCustomPlot *CFB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1263, 834);
        MainWindow->setMinimumSize(QSize(500, 500));
        QFont font;
        font.setFamily(QString::fromUtf8("Aero Matics"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(0, 0));
        Text = new QWidget();
        Text->setObjectName(QString::fromUtf8("Text"));
        verticalLayout_7 = new QVBoxLayout(Text);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label = new QLabel(Text);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);

        textEdit = new QTextEdit(Text);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout_7->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_8 = new QLabel(Text);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_3 = new QLineEdit(Text);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_9 = new QLabel(Text);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        lineEdit_4 = new QLineEdit(Text);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_4);


        horizontalLayout->addLayout(formLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_6 = new QLabel(Text);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_6);

        lineEdit = new QLineEdit(Text);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_7 = new QLabel(Text);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);

        lineEdit_2 = new QLineEdit(Text);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        horizontalLayout->addLayout(formLayout);


        verticalLayout_7->addLayout(horizontalLayout);

        debugedit = new QTextEdit(Text);
        debugedit->setObjectName(QString::fromUtf8("debugedit"));

        verticalLayout_7->addWidget(debugedit);

        label_10 = new QLabel(Text);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_7->addWidget(label_10);

        textPlot = new QCustomPlot(Text);
        textPlot->setObjectName(QString::fromUtf8("textPlot"));
        textPlot->setMinimumSize(QSize(0, 250));

        verticalLayout_7->addWidget(textPlot);

        pushButton = new QPushButton(Text);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_7->addWidget(pushButton);

        tabWidget->addTab(Text, QString());
        lab2 = new QWidget();
        lab2->setObjectName(QString::fromUtf8("lab2"));
        verticalLayout_2 = new QVBoxLayout(lab2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_11 = new QLabel(lab2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);

        plot1 = new QCustomPlot(lab2);
        plot1->setObjectName(QString::fromUtf8("plot1"));
        plot1->setMinimumSize(QSize(600, 300));

        verticalLayout_3->addWidget(plot1);

        label_13 = new QLabel(lab2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);

        plot3 = new QCustomPlot(lab2);
        plot3->setObjectName(QString::fromUtf8("plot3"));
        plot3->setMinimumSize(QSize(600, 300));

        verticalLayout_3->addWidget(plot3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_12 = new QLabel(lab2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_4->addWidget(label_12);

        plot2 = new QCustomPlot(lab2);
        plot2->setObjectName(QString::fromUtf8("plot2"));
        plot2->setMinimumSize(QSize(600, 300));

        verticalLayout_4->addWidget(plot2);

        label_14 = new QLabel(lab2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_4->addWidget(label_14);

        plot4 = new QCustomPlot(lab2);
        plot4->setObjectName(QString::fromUtf8("plot4"));
        plot4->setMinimumSize(QSize(600, 300));

        verticalLayout_4->addWidget(plot4);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tabWidget->addTab(lab2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_8 = new QVBoxLayout(tab_4);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_5 = new QLabel(tab_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_10->addWidget(label_5);

        OFB = new QCustomPlot(tab_4);
        OFB->setObjectName(QString::fromUtf8("OFB"));
        OFB->setMinimumSize(QSize(600, 300));

        verticalLayout_10->addWidget(OFB);

        label_3 = new QLabel(tab_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_10->addWidget(label_3);

        CPC = new QCustomPlot(tab_4);
        CPC->setObjectName(QString::fromUtf8("CPC"));
        CPC->setMinimumSize(QSize(600, 300));

        verticalLayout_10->addWidget(CPC);


        horizontalLayout_5->addLayout(verticalLayout_10);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_9->addWidget(label_2);

        ECB = new QCustomPlot(tab_4);
        ECB->setObjectName(QString::fromUtf8("ECB"));
        ECB->setMinimumSize(QSize(600, 300));

        verticalLayout_9->addWidget(ECB);

        label_4 = new QLabel(tab_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_9->addWidget(label_4);

        CFB = new QCustomPlot(tab_4);
        CFB->setObjectName(QString::fromUtf8("CFB"));
        CFB->setMinimumSize(QSize(600, 300));

        verticalLayout_9->addWidget(CFB);


        horizontalLayout_5->addLayout(verticalLayout_9);


        verticalLayout_8->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1263, 34));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\202\320\265\320\272\321\201\321\202:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "K1:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "K0:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "P0:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "C0:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Histogram text", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Text), QCoreApplication::translate("MainWindow", "Text", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\264\320\270\321\206\320\270\320\276\320\275\320\275\320\276\320\265 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\320\260\321\200\320\275\320\276\320\263\320\276 \321\210\320\270\321\204\321\200\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272\320\273\321\216\321\207\320\260 \320\277\320\276\320\263\320\276\320\262\320\276\321\200\320\272\320\270", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272\320\273\321\216\321\207\320\260 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 LFSR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(lab2), QCoreApplication::translate("MainWindow", "Histogram lab2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "OFB", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CPC", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ECB", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "CFB", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Histogram DES", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
