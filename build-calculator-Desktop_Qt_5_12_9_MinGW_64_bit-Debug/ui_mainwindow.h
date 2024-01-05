/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStardand_T;
    QAction *actionScience_S;
    QAction *actionhistory_H;
    QAction *actionHelp;
    QAction *actionclear_C;
    QAction *actionAbout;
    QWidget *centralwidget;
    QGroupBox *Standard;
    QPushButton *No7;
    QPushButton *No8;
    QPushButton *No9;
    QPushButton *No2;
    QPushButton *No5;
    QPushButton *No4;
    QPushButton *No3;
    QPushButton *No6;
    QPushButton *No1;
    QPushButton *slash;
    QPushButton *multiply;
    QPushButton *No0;
    QPushButton *point;
    QPushButton *plus;
    QPushButton *minus;
    QPushButton *equal;
    QPushButton *re;
    QPushButton *radical;
    QPushButton *delete_2;
    QPushButton *clear;
    QGroupBox *formGroupBox;
    QLabel *eLabel;
    QLineEdit *enter;
    QLabel *Label;
    QLineEdit *result;
    QGroupBox *Science;
    QPushButton *cos;
    QPushButton *arctan;
    QPushButton *ln;
    QPushButton *arccos;
    QPushButton *tan;
    QPushButton *tentox;
    QPushButton *sin;
    QPushButton *arcsin;
    QPushButton *PI;
    QPushButton *exp;
    QPushButton *square;
    QPushButton *cube;
    QPushButton *log;
    QPushButton *sinh;
    QPushButton *cosh;
    QPushButton *tanh;
    QPushButton *Rightbrackets;
    QPushButton *Leftbrackets;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QTextEdit *Historybox;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu_C;
    QMenu *menu_A;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(290, 390);
        QFont font;
        font.setPointSize(9);
        MainWindow->setFont(font);
        actionStardand_T = new QAction(MainWindow);
        actionStardand_T->setObjectName(QString::fromUtf8("actionStardand_T"));
        actionScience_S = new QAction(MainWindow);
        actionScience_S->setObjectName(QString::fromUtf8("actionScience_S"));
        actionhistory_H = new QAction(MainWindow);
        actionhistory_H->setObjectName(QString::fromUtf8("actionhistory_H"));
        actionhistory_H->setCheckable(true);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionclear_C = new QAction(MainWindow);
        actionclear_C->setObjectName(QString::fromUtf8("actionclear_C"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFont(font);
        Standard = new QGroupBox(centralwidget);
        Standard->setObjectName(QString::fromUtf8("Standard"));
        Standard->setEnabled(true);
        Standard->setGeometry(QRect(10, 60, 300, 270));
        Standard->setAcceptDrops(false);
        Standard->setFlat(true);
        No7 = new QPushButton(Standard);
        No7->setObjectName(QString::fromUtf8("No7"));
        No7->setGeometry(QRect(10, 120, 50, 50));
        QFont font1;
        font1.setPointSize(12);
        No7->setFont(font1);
        No7->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No8 = new QPushButton(Standard);
        No8->setObjectName(QString::fromUtf8("No8"));
        No8->setGeometry(QRect(60, 120, 50, 50));
        No8->setFont(font1);
        No8->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No9 = new QPushButton(Standard);
        No9->setObjectName(QString::fromUtf8("No9"));
        No9->setGeometry(QRect(110, 120, 50, 50));
        No9->setFont(font1);
        No9->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No2 = new QPushButton(Standard);
        No2->setObjectName(QString::fromUtf8("No2"));
        No2->setGeometry(QRect(60, 20, 50, 50));
        No2->setFont(font1);
        No2->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No5 = new QPushButton(Standard);
        No5->setObjectName(QString::fromUtf8("No5"));
        No5->setGeometry(QRect(60, 70, 50, 50));
        No5->setFont(font1);
        No5->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No4 = new QPushButton(Standard);
        No4->setObjectName(QString::fromUtf8("No4"));
        No4->setGeometry(QRect(10, 70, 50, 50));
        No4->setFont(font1);
        No4->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No3 = new QPushButton(Standard);
        No3->setObjectName(QString::fromUtf8("No3"));
        No3->setGeometry(QRect(110, 20, 50, 50));
        No3->setFont(font1);
        No3->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No6 = new QPushButton(Standard);
        No6->setObjectName(QString::fromUtf8("No6"));
        No6->setGeometry(QRect(110, 70, 50, 50));
        No6->setFont(font1);
        No6->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No1 = new QPushButton(Standard);
        No1->setObjectName(QString::fromUtf8("No1"));
        No1->setEnabled(true);
        No1->setGeometry(QRect(10, 20, 50, 50));
        No1->setFont(font1);
        No1->setTabletTracking(false);
        No1->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No1->setFlat(false);
        slash = new QPushButton(Standard);
        slash->setObjectName(QString::fromUtf8("slash"));
        slash->setGeometry(QRect(160, 20, 50, 50));
        slash->setFont(font1);
        slash->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        multiply = new QPushButton(Standard);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setGeometry(QRect(160, 70, 50, 50));
        multiply->setFont(font1);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        No0 = new QPushButton(Standard);
        No0->setObjectName(QString::fromUtf8("No0"));
        No0->setGeometry(QRect(10, 170, 100, 50));
        No0->setFont(font1);
        No0->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        point = new QPushButton(Standard);
        point->setObjectName(QString::fromUtf8("point"));
        point->setGeometry(QRect(110, 170, 50, 50));
        point->setFont(font1);
        point->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        plus = new QPushButton(Standard);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(160, 170, 50, 50));
        plus->setFont(font1);
        plus->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        minus = new QPushButton(Standard);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(160, 120, 50, 50));
        minus->setFont(font1);
        minus->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        equal = new QPushButton(Standard);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setGeometry(QRect(210, 120, 50, 100));
        equal->setFont(font1);
        equal->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        re = new QPushButton(Standard);
        re->setObjectName(QString::fromUtf8("re"));
        re->setGeometry(QRect(210, 70, 50, 50));
        re->setFont(font1);
        re->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        radical = new QPushButton(Standard);
        radical->setObjectName(QString::fromUtf8("radical"));
        radical->setGeometry(QRect(210, 20, 50, 50));
        radical->setFont(font1);
        radical->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        delete_2 = new QPushButton(Standard);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(10, 220, 100, 50));
        delete_2->setFont(font1);
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        clear = new QPushButton(Standard);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(110, 220, 150, 50));
        clear->setFont(font1);
        clear->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        formGroupBox = new QGroupBox(centralwidget);
        formGroupBox->setObjectName(QString::fromUtf8("formGroupBox"));
        formGroupBox->setGeometry(QRect(30, 10, 250, 54));
        formGroupBox->setFlat(true);
        eLabel = new QLabel(formGroupBox);
        eLabel->setObjectName(QString::fromUtf8("eLabel"));
        eLabel->setGeometry(QRect(2, 2, 31, 20));
        enter = new QLineEdit(formGroupBox);
        enter->setObjectName(QString::fromUtf8("enter"));
        enter->setGeometry(QRect(56, 2, 180, 20));
        enter->setReadOnly(true);
        Label = new QLabel(formGroupBox);
        Label->setObjectName(QString::fromUtf8("Label"));
        Label->setGeometry(QRect(2, 28, 30, 20));
        result = new QLineEdit(formGroupBox);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(56, 28, 180, 20));
        result->setReadOnly(true);
        eLabel->raise();
        Label->raise();
        result->raise();
        enter->raise();
        Science = new QGroupBox(centralwidget);
        Science->setObjectName(QString::fromUtf8("Science"));
        Science->setEnabled(true);
        Science->setGeometry(QRect(10, 60, 230, 280));
        Science->setFont(font);
        Science->setFlat(true);
        cos = new QPushButton(Science);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(60, 70, 50, 50));
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        arctan = new QPushButton(Science);
        arctan->setObjectName(QString::fromUtf8("arctan"));
        arctan->setGeometry(QRect(110, 120, 50, 50));
        arctan->setFont(font1);
        arctan->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        ln = new QPushButton(Science);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(160, 120, 50, 50));
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        arccos = new QPushButton(Science);
        arccos->setObjectName(QString::fromUtf8("arccos"));
        arccos->setGeometry(QRect(60, 120, 50, 50));
        arccos->setFont(font1);
        arccos->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        tan = new QPushButton(Science);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(110, 70, 50, 50));
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        tentox = new QPushButton(Science);
        tentox->setObjectName(QString::fromUtf8("tentox"));
        tentox->setGeometry(QRect(160, 220, 50, 50));
        tentox->setFont(font1);
        tentox->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        sin = new QPushButton(Science);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(10, 70, 50, 50));
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        arcsin = new QPushButton(Science);
        arcsin->setObjectName(QString::fromUtf8("arcsin"));
        arcsin->setGeometry(QRect(10, 120, 50, 50));
        arcsin->setFont(font1);
        arcsin->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        PI = new QPushButton(Science);
        PI->setObjectName(QString::fromUtf8("PI"));
        PI->setGeometry(QRect(160, 70, 50, 50));
        PI->setFont(font1);
        PI->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        exp = new QPushButton(Science);
        exp->setObjectName(QString::fromUtf8("exp"));
        exp->setGeometry(QRect(110, 220, 50, 50));
        exp->setFont(font1);
        exp->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        square = new QPushButton(Science);
        square->setObjectName(QString::fromUtf8("square"));
        square->setGeometry(QRect(10, 220, 50, 50));
        square->setFont(font1);
        square->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        cube = new QPushButton(Science);
        cube->setObjectName(QString::fromUtf8("cube"));
        cube->setGeometry(QRect(60, 220, 50, 50));
        cube->setFont(font1);
        cube->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        log = new QPushButton(Science);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(160, 170, 50, 50));
        log->setFont(font1);
        log->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        sinh = new QPushButton(Science);
        sinh->setObjectName(QString::fromUtf8("sinh"));
        sinh->setGeometry(QRect(10, 170, 50, 50));
        sinh->setFont(font1);
        sinh->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        cosh = new QPushButton(Science);
        cosh->setObjectName(QString::fromUtf8("cosh"));
        cosh->setGeometry(QRect(60, 170, 50, 50));
        cosh->setFont(font1);
        cosh->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        tanh = new QPushButton(Science);
        tanh->setObjectName(QString::fromUtf8("tanh"));
        tanh->setGeometry(QRect(110, 170, 50, 50));
        tanh->setFont(font1);
        tanh->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        Rightbrackets = new QPushButton(Science);
        Rightbrackets->setObjectName(QString::fromUtf8("Rightbrackets"));
        Rightbrackets->setGeometry(QRect(160, 20, 50, 50));
        Rightbrackets->setFont(font1);
        Rightbrackets->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        Leftbrackets = new QPushButton(Science);
        Leftbrackets->setObjectName(QString::fromUtf8("Leftbrackets"));
        Leftbrackets->setGeometry(QRect(110, 20, 50, 50));
        Leftbrackets->setFont(font1);
        Leftbrackets->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        pushButton_5 = new QPushButton(Science);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setEnabled(false);
        pushButton_5->setGeometry(QRect(60, 20, 50, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        pushButton_4 = new QPushButton(Science);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(10, 20, 50, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton \n"
"{\n"
"border-left: 2px solid rgb(238, 238, 238);\n"
"\n"
"border-right: 2px solid  rgb(238, 238, 238);\n"
"\n"
"border-top: 2px solid  rgb(238, 238, 238);\n"
"border-bottom: 2px solid  rgb(238, 238, 238);\n"
" background-color: rgb(252, 252, 252);\n"
" border-radius: 3px; \n"
" color: rgb(0, 0, 0);\n"
" }\n"
" QPushButton:hover {\n"
"border-left: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-right: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-top: 2px solid rgb(241, 241, 241);\n"
"\n"
"border-bottom: 2px solid rgb(241, 241, 241);\n"
"background-color: rgb(214, 214, 214); \n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        Historybox = new QTextEdit(centralwidget);
        Historybox->setObjectName(QString::fromUtf8("Historybox"));
        Historybox->setEnabled(true);
        Historybox->setGeometry(QRect(30, 0, 230, 80));
        Historybox->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 290, 23));
        menu_C = new QMenu(menubar);
        menu_C->setObjectName(QString::fromUtf8("menu_C"));
        menu_A = new QMenu(menubar);
        menu_A->setObjectName(QString::fromUtf8("menu_A"));
        MainWindow->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        eLabel->setBuddy(enter);
        Label->setBuddy(result);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(No1, No2);
        QWidget::setTabOrder(No2, No3);
        QWidget::setTabOrder(No3, No4);
        QWidget::setTabOrder(No4, No5);
        QWidget::setTabOrder(No5, No6);
        QWidget::setTabOrder(No6, No7);
        QWidget::setTabOrder(No7, No8);
        QWidget::setTabOrder(No8, No9);

        menubar->addAction(menu_C->menuAction());
        menubar->addAction(menu_A->menuAction());
        menu_C->addAction(actionStardand_T);
        menu_C->addAction(actionScience_S);
        menu_C->addAction(actionhistory_H);
        menu_C->addAction(actionclear_C);
        menu_A->addAction(actionHelp);
        menu_A->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionStardand_T->setText(QApplication::translate("MainWindow", "Stardand(&T)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionStardand_T->setShortcut(QApplication::translate("MainWindow", "Alt+1", nullptr));
#endif // QT_NO_SHORTCUT
        actionScience_S->setText(QApplication::translate("MainWindow", "Science(&S)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionScience_S->setShortcut(QApplication::translate("MainWindow", "Alt+2", nullptr));
#endif // QT_NO_SHORTCUT
        actionhistory_H->setText(QApplication::translate("MainWindow", "History(&H)", nullptr));
#ifndef QT_NO_SHORTCUT
        actionhistory_H->setShortcut(QApplication::translate("MainWindow", "Alt+H", nullptr));
#endif // QT_NO_SHORTCUT
        actionHelp->setText(QApplication::translate("MainWindow", "Help(&H)", nullptr));
        actionclear_C->setText(QApplication::translate("MainWindow", "ClearHistory(&C)", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "About(&A)", nullptr));
        No7->setText(QApplication::translate("MainWindow", "7", nullptr));
        No8->setText(QApplication::translate("MainWindow", "8", nullptr));
        No9->setText(QApplication::translate("MainWindow", "9", nullptr));
        No2->setText(QApplication::translate("MainWindow", "2", nullptr));
        No5->setText(QApplication::translate("MainWindow", "5", nullptr));
        No4->setText(QApplication::translate("MainWindow", "4", nullptr));
        No3->setText(QApplication::translate("MainWindow", "3", nullptr));
        No6->setText(QApplication::translate("MainWindow", "6", nullptr));
        No1->setText(QApplication::translate("MainWindow", "1", nullptr));
        slash->setText(QApplication::translate("MainWindow", "/", nullptr));
        multiply->setText(QApplication::translate("MainWindow", "*", nullptr));
        No0->setText(QApplication::translate("MainWindow", "0", nullptr));
        point->setText(QApplication::translate("MainWindow", ".", nullptr));
        plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        equal->setText(QApplication::translate("MainWindow", "=", nullptr));
        re->setText(QApplication::translate("MainWindow", "1/x", nullptr));
        radical->setText(QApplication::translate("MainWindow", "\342\210\232", nullptr));
        delete_2->setText(QApplication::translate("MainWindow", "del", nullptr));
        clear->setText(QApplication::translate("MainWindow", "clear", nullptr));
        eLabel->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245:", nullptr));
        Label->setText(QApplication::translate("MainWindow", "\347\273\223\346\236\234:", nullptr));
        cos->setText(QApplication::translate("MainWindow", "cos", nullptr));
        arctan->setText(QApplication::translate("MainWindow", "arctan", nullptr));
        ln->setText(QApplication::translate("MainWindow", "ln", nullptr));
        arccos->setText(QApplication::translate("MainWindow", "arccos", nullptr));
        tan->setText(QApplication::translate("MainWindow", "tan", nullptr));
        tentox->setText(QApplication::translate("MainWindow", "10^x", nullptr));
        sin->setText(QApplication::translate("MainWindow", "sin", nullptr));
        arcsin->setText(QApplication::translate("MainWindow", "arcsin", nullptr));
        PI->setText(QApplication::translate("MainWindow", "\317\200", nullptr));
        exp->setText(QApplication::translate("MainWindow", "x^y", nullptr));
        square->setText(QApplication::translate("MainWindow", "x^2", nullptr));
        cube->setText(QApplication::translate("MainWindow", "x^3", nullptr));
        log->setText(QApplication::translate("MainWindow", "log", nullptr));
        sinh->setText(QApplication::translate("MainWindow", "sinh", nullptr));
        cosh->setText(QApplication::translate("MainWindow", "cosh", nullptr));
        tanh->setText(QApplication::translate("MainWindow", "tanh", nullptr));
        Rightbrackets->setText(QApplication::translate("MainWindow", ")", nullptr));
        Leftbrackets->setText(QApplication::translate("MainWindow", "(", nullptr));
        pushButton_5->setText(QString());
        pushButton_4->setText(QString());
        menu_C->setTitle(QApplication::translate("MainWindow", "\351\200\211\351\241\271(&C)", nullptr));
        menu_A->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
