/********************************************************************************
** Form generated from reading UI file 'SimonView.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMONVIEW_H
#define UI_SIMONVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SimonView
{
public:
    QWidget *centralwidget;
    QPushButton *playButton;
    QPushButton *leftRedButton;
    QPushButton *rightBlueButton;
    QLabel *score;
    QProgressBar *progressBar;
    QLabel *youLostLabel;
    QLabel *gameStatus;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimonView)
    {
        if (SimonView->objectName().isEmpty())
            SimonView->setObjectName("SimonView");
        SimonView->resize(542, 339);
        centralwidget = new QWidget(SimonView);
        centralwidget->setObjectName("centralwidget");
        playButton = new QPushButton(centralwidget);
        playButton->setObjectName("playButton");
        playButton->setEnabled(true);
        playButton->setGeometry(QRect(170, 210, 201, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminal")});
        font.setPointSize(14);
        font.setBold(true);
        font.setStrikeOut(false);
        font.setKerning(true);
        playButton->setFont(font);
        playButton->setCursor(QCursor(Qt::PointingHandCursor));
        playButton->setAutoFillBackground(false);
        playButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    color: #333;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px;\n"
"	background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #eee, stop: 1 #aaa\n"
"        );\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background: qradialgradient(\n"
"        cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"        radius: 1.35, stop: 0 #fff, stop: 1 #bbb\n"
"        );\n"
"    }"));
        leftRedButton = new QPushButton(centralwidget);
        leftRedButton->setObjectName("leftRedButton");
        leftRedButton->setGeometry(QRect(10, 20, 261, 271));
        leftRedButton->setAutoFillBackground(false);
        leftRedButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-image: url(\":/icons/redFlashOff.png\") 0 0 0 0 stretch stretch;\n"
"   border-style: outset;\n"
"	border-radius: 10px;\n"
"}"));
        rightBlueButton = new QPushButton(centralwidget);
        rightBlueButton->setObjectName("rightBlueButton");
        rightBlueButton->setGeometry(QRect(270, 20, 261, 271));
        rightBlueButton->setAutoFillBackground(false);
        rightBlueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   background-color: #3C6291;\n"
"	border-image: url(\":/icons/blueFlashOff.png\") 0 0 0 0 stretch stretch;\n"
"   border-style: outset;\n"
"	border-radius: 10px;\n"
"}"));
        score = new QLabel(centralwidget);
        score->setObjectName("score");
        score->setGeometry(QRect(20, 30, 41, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminal")});
        font1.setPointSize(30);
        font1.setBold(true);
        score->setFont(font1);
        score->setLayoutDirection(Qt::LeftToRight);
        score->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(30, 0, 501, 16));
        QFont font2;
        font2.setPointSize(7);
        progressBar->setFont(font2);
        progressBar->setValue(24);
        youLostLabel = new QLabel(centralwidget);
        youLostLabel->setObjectName("youLostLabel");
        youLostLabel->setGeometry(QRect(10, 90, 521, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Impact")});
        font3.setPointSize(67);
        font3.setBold(false);
        youLostLabel->setFont(font3);
        youLostLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        youLostLabel->setAlignment(Qt::AlignCenter);
        gameStatus = new QLabel(centralwidget);
        gameStatus->setObjectName("gameStatus");
        gameStatus->setGeometry(QRect(426, 30, 81, 21));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Terminal")});
        font4.setPointSize(15);
        font4.setBold(true);
        gameStatus->setFont(font4);
        gameStatus->setAlignment(Qt::AlignCenter);
        SimonView->setCentralWidget(centralwidget);
        rightBlueButton->raise();
        leftRedButton->raise();
        playButton->raise();
        progressBar->raise();
        score->raise();
        youLostLabel->raise();
        gameStatus->raise();
        menubar = new QMenuBar(SimonView);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 542, 17));
        SimonView->setMenuBar(menubar);
        statusbar = new QStatusBar(SimonView);
        statusbar->setObjectName("statusbar");
        SimonView->setStatusBar(statusbar);

        retranslateUi(SimonView);

        QMetaObject::connectSlotsByName(SimonView);
    } // setupUi

    void retranslateUi(QMainWindow *SimonView)
    {
        SimonView->setWindowTitle(QCoreApplication::translate("SimonView", "SimonView", nullptr));
        playButton->setText(QCoreApplication::translate("SimonView", "Click to Play!", nullptr));
        leftRedButton->setText(QString());
        rightBlueButton->setText(QString());
        score->setText(QCoreApplication::translate("SimonView", "0", nullptr));
        youLostLabel->setText(QCoreApplication::translate("SimonView", "YOU LOST", nullptr));
        gameStatus->setText(QCoreApplication::translate("SimonView", "Watch!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimonView: public Ui_SimonView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMONVIEW_H
