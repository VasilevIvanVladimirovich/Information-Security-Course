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
#include <QtWidgets/QCheckBox>
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
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
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
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *label_15;
    QLineEdit *key;
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
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_16;
    QCustomPlot *one;
    QLabel *label_18;
    QCustomPlot *five;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_20;
    QCustomPlot *two;
    QLabel *label_21;
    QCustomPlot *six;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_17;
    QCustomPlot *tree;
    QLabel *label_19;
    QCustomPlot *seven;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_22;
    QCustomPlot *four;
    QLabel *label_23;
    QCustomPlot *eight;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_24;
    QTextEdit *Round1;
    QLabel *label_25;
    QTextEdit *Round5;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_26;
    QTextEdit *Round2;
    QLabel *label_27;
    QTextEdit *Round6;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_28;
    QTextEdit *Round3;
    QLabel *label_29;
    QTextEdit *Round7;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_30;
    QTextEdit *Round4;
    QLabel *label_31;
    QTextEdit *Round8;
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
        MainWindow->resize(2481, 1109);
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

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        checkBox_3 = new QCheckBox(Text);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_7->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(Text);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_7->addWidget(checkBox_2);

        checkBox = new QCheckBox(Text);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_7->addWidget(checkBox);


        verticalLayout_7->addLayout(horizontalLayout_7);

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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_15 = new QLabel(Text);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_15);

        key = new QLineEdit(Text);
        key->setObjectName(QString::fromUtf8("key"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, key);


        horizontalLayout_4->addLayout(formLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_4);

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
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_16 = new QLabel(tab);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMaximumSize(QSize(16777215, 50));

        verticalLayout_11->addWidget(label_16);

        one = new QCustomPlot(tab);
        one->setObjectName(QString::fromUtf8("one"));
        one->setMinimumSize(QSize(450, 250));

        verticalLayout_11->addWidget(one);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMaximumSize(QSize(16777215, 50));

        verticalLayout_11->addWidget(label_18);

        five = new QCustomPlot(tab);
        five->setObjectName(QString::fromUtf8("five"));
        five->setMinimumSize(QSize(450, 250));

        verticalLayout_11->addWidget(five);


        horizontalLayout_3->addLayout(verticalLayout_11);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMaximumSize(QSize(16777215, 50));

        verticalLayout_13->addWidget(label_20);

        two = new QCustomPlot(tab);
        two->setObjectName(QString::fromUtf8("two"));
        two->setMinimumSize(QSize(450, 250));

        verticalLayout_13->addWidget(two);

        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMaximumSize(QSize(16777215, 50));

        verticalLayout_13->addWidget(label_21);

        six = new QCustomPlot(tab);
        six->setObjectName(QString::fromUtf8("six"));
        six->setMinimumSize(QSize(450, 250));

        verticalLayout_13->addWidget(six);


        horizontalLayout_3->addLayout(verticalLayout_13);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_17 = new QLabel(tab);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(16777215, 50));

        verticalLayout_12->addWidget(label_17);

        tree = new QCustomPlot(tab);
        tree->setObjectName(QString::fromUtf8("tree"));
        tree->setMinimumSize(QSize(450, 250));

        verticalLayout_12->addWidget(tree);

        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMaximumSize(QSize(16777215, 50));

        verticalLayout_12->addWidget(label_19);

        seven = new QCustomPlot(tab);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setMinimumSize(QSize(450, 250));

        verticalLayout_12->addWidget(seven);


        horizontalLayout_3->addLayout(verticalLayout_12);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        label_22 = new QLabel(tab);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMaximumSize(QSize(16777215, 50));

        verticalLayout_15->addWidget(label_22);

        four = new QCustomPlot(tab);
        four->setObjectName(QString::fromUtf8("four"));
        four->setMinimumSize(QSize(450, 250));

        verticalLayout_15->addWidget(four);

        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMaximumSize(QSize(16777215, 50));

        verticalLayout_15->addWidget(label_23);

        eight = new QCustomPlot(tab);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setMinimumSize(QSize(450, 250));

        verticalLayout_15->addWidget(eight);


        horizontalLayout_3->addLayout(verticalLayout_15);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_24 = new QLabel(tab_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_5->addWidget(label_24);

        Round1 = new QTextEdit(tab_2);
        Round1->setObjectName(QString::fromUtf8("Round1"));

        verticalLayout_5->addWidget(Round1);

        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        verticalLayout_5->addWidget(label_25);

        Round5 = new QTextEdit(tab_2);
        Round5->setObjectName(QString::fromUtf8("Round5"));

        verticalLayout_5->addWidget(Round5);


        horizontalLayout_6->addLayout(verticalLayout_5);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        verticalLayout_14->addWidget(label_26);

        Round2 = new QTextEdit(tab_2);
        Round2->setObjectName(QString::fromUtf8("Round2"));

        verticalLayout_14->addWidget(Round2);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_14->addWidget(label_27);

        Round6 = new QTextEdit(tab_2);
        Round6->setObjectName(QString::fromUtf8("Round6"));

        verticalLayout_14->addWidget(Round6);


        horizontalLayout_6->addLayout(verticalLayout_14);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        label_28 = new QLabel(tab_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_16->addWidget(label_28);

        Round3 = new QTextEdit(tab_2);
        Round3->setObjectName(QString::fromUtf8("Round3"));

        verticalLayout_16->addWidget(Round3);

        label_29 = new QLabel(tab_2);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_16->addWidget(label_29);

        Round7 = new QTextEdit(tab_2);
        Round7->setObjectName(QString::fromUtf8("Round7"));

        verticalLayout_16->addWidget(Round7);


        horizontalLayout_6->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        verticalLayout_17->addWidget(label_30);

        Round4 = new QTextEdit(tab_2);
        Round4->setObjectName(QString::fromUtf8("Round4"));

        verticalLayout_17->addWidget(Round4);

        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_17->addWidget(label_31);

        Round8 = new QTextEdit(tab_2);
        Round8->setObjectName(QString::fromUtf8("Round8"));

        verticalLayout_17->addWidget(Round8);


        horizontalLayout_6->addLayout(verticalLayout_17);

        tabWidget->addTab(tab_2, QString());
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
        menubar->setGeometry(QRect(0, 0, 2481, 33));
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
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Lab2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Lab3", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "DES", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "K1:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "K0:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "P0:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "C0:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\263\320\276\320\262\320\276\321\200\320\272\320\260", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Histogram text", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\207\321\221\321\202", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Text), QCoreApplication::translate("MainWindow", "Text", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\264\320\270\321\206\320\270\320\276\320\275\320\275\320\276\320\265 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\277\320\260\321\200\320\275\320\276\320\263\320\276 \321\210\320\270\321\204\321\200\320\260", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272\320\273\321\216\321\207\320\260 \320\277\320\276\320\263\320\276\320\262\320\276\321\200\320\272\320\270", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 \320\272\320\273\321\216\321\207\320\260 \320\277\320\276 \320\275\320\276\320\274\320\265\321\200\321\203 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\277\320\276\320\274\320\276\321\211\321\214\321\216 LFSR", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(lab2), QCoreApplication::translate("MainWindow", "Histogram lab2", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Histogram Lab3", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Round 1", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Round 5", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Round 2", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "Round 6", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "Round 3", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "Round 7", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Round 4", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "Round 8", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Out Lab3", nullptr));
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
