/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *RedButton;
    QPushButton *BlueButton;
    QPushButton *StartButton;
    QProgressBar *ProgressBar;
    QLabel *TurnLabel;
    QPushButton *YellowButton;
    QPushButton *GreenButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 400);
        MainWindow->setMinimumSize(QSize(400, 400));
        MainWindow->setMaximumSize(QSize(400, 400));
        MainWindow->setStyleSheet(QLatin1String("color:white;\n"
"background-color:black;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RedButton = new QPushButton(centralWidget);
        RedButton->setObjectName(QStringLiteral("RedButton"));
        RedButton->setGeometry(QRect(220, 80, 150, 100));
        QFont font;
        font.setPointSize(15);
        RedButton->setFont(font);
        RedButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"                        border: 10px solid rgb(129, 0, 1);\n"
"					 border-radius: 50px;\n"
"                        background-color:rgb(129, 0, 1);}\n"
"QPushButton:pressed {\n"
"                        color:rgb(239, 22, 20);\n"
"                         background-color:rgb(239, 22, 20); }\"\n"
""));
        BlueButton = new QPushButton(centralWidget);
        BlueButton->setObjectName(QStringLiteral("BlueButton"));
        BlueButton->setGeometry(QRect(220, 200, 150, 100));
        BlueButton->setFont(font);
        BlueButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"                        border: 10px solid rgb(5, 74, 137);\n"
"					 border-radius: 50px;\n"
"                      background-color:rgb(5, 74, 137);}\n"
"QPushButton:pressed {\n"
"                        color:rgb(6, 150, 255);\n"
"                         background-color:rgb(6, 150, 255); }\"\n"
""));
        BlueButton->setFlat(false);
        StartButton = new QPushButton(centralWidget);
        StartButton->setObjectName(QStringLiteral("StartButton"));
        StartButton->setGeometry(QRect(175, 170, 50, 35));
        StartButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"					 border-radius: 15px;\n"
"                        color:black;\n"
"                        background-color:rgb(63, 207, 69);}\n"
"\n"
""));
        StartButton->setAutoDefault(false);
        ProgressBar = new QProgressBar(centralWidget);
        ProgressBar->setObjectName(QStringLiteral("ProgressBar"));
        ProgressBar->setGeometry(QRect(70, 320, 301, 25));
        ProgressBar->setStyleSheet(QLatin1String("border: 4px solid black;\n"
"border-radius: 10px;\n"
"background: white;\n"
"padding: 4px;\n"
"text-align: right;\n"
"margin-right: 6ex;"));
        ProgressBar->setValue(24);
        TurnLabel = new QLabel(centralWidget);
        TurnLabel->setObjectName(QStringLiteral("TurnLabel"));
        TurnLabel->setGeometry(QRect(0, 50, 400, 20));
        QFont font1;
        font1.setPointSize(16);
        TurnLabel->setFont(font1);
        TurnLabel->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        YellowButton = new QPushButton(centralWidget);
        YellowButton->setObjectName(QStringLiteral("YellowButton"));
        YellowButton->setGeometry(QRect(30, 200, 150, 100));
        YellowButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"                        border: 10px solid rgb(167, 157, 3);\n"
"					 border-radius: 50px;\n"
"                        background-color:rgb(167, 157, 3);}\n"
"QPushButton:pressed {\n"
"                        color:rgb(253, 249, 40);\n"
"                         background-color:rgb(253, 249, 40); }\"\n"
""));
        GreenButton = new QPushButton(centralWidget);
        GreenButton->setObjectName(QStringLiteral("GreenButton"));
        GreenButton->setGeometry(QRect(30, 80, 150, 100));
        GreenButton->setStyleSheet(QLatin1String("QPushButton{ \n"
"                        border: 10px solid rgb(31, 128, 29);\n"
"					 border-radius: 50px;\n"
"                        background-color:rgb(31, 128, 29);}\n"
"QPushButton:pressed {\n"
"                        color:rgb(66, 211, 72);\n"
"                         background-color:rgb(66, 211, 72); }\"\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 400, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Eurostile"));
        font2.setPointSize(40);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font2);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        RedButton->raise();
        BlueButton->raise();
        StartButton->raise();
        TurnLabel->raise();
        YellowButton->raise();
        GreenButton->raise();
        ProgressBar->raise();
        label->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        StartButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        RedButton->setText(QString());
        BlueButton->setText(QString());
        StartButton->setText(QApplication::translate("MainWindow", "Start", 0));
        TurnLabel->setText(QApplication::translate("MainWindow", "Simon Says", 0));
        YellowButton->setText(QString());
        GreenButton->setText(QString());
        label->setText(QApplication::translate("MainWindow", "SIMON", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
