/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QListWidget *listWidget;
    QLabel *totalCostLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(613, 572);
        QFont font;
        font.setFamilies({QString::fromUtf8("JetBrains Mono")});
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(70, 90, 181, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font1.setPointSize(12);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  10px;\n"
"    background-color: rgb(0, 170, 255);\n"
"    color:  rgb(0,0,0);\n"
"	font-size: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(118, 118, 118);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(350, 90, 181, 61));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  10px;\n"
"    background-color:  rgb(0, 170, 255);\n"
"    color: rgb(0, 0, 0);\n"
"    font-size:  16px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(118, 118, 118);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(70, 460, 461, 41));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius:  10px;\n"
"    background-color:  rgb(37, 37, 37);\n"
"    color: rgb(255, 0, 0);\n"
"    font-size:  33px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color:  rgb(118, 118, 118);\n"
"}"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(70, 150, 461, 311));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("JetBrains Mono")});
        font2.setPointSize(9);
        listWidget->setFont(font2);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	background-color: rgb(195, 195, 195);\n"
"}"));
        totalCostLabel = new QLabel(centralwidget);
        totalCostLabel->setObjectName("totalCostLabel");
        totalCostLabel->setGeometry(QRect(70, 430, 461, 31));
        totalCostLabel->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 613, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        totalCostLabel->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
