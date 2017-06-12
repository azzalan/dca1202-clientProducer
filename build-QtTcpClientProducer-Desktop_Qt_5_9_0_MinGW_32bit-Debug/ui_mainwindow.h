/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *disconnectButton;
    QSpinBox *maxInput;
    QLineEdit *ipInput;
    QTextBrowser *textDisplay;
    QSpinBox *minInput;
    QSpinBox *timingInput;
    QPushButton *startButton;
    QPushButton *stopButton;
    QPushButton *connectButton;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_4;
    QMenuBar *menuBar;
    QMenu *menuClient_Producer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(492, 316);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 420, 189));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        disconnectButton = new QPushButton(widget);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        gridLayout->addWidget(disconnectButton, 3, 1, 1, 1);

        maxInput = new QSpinBox(widget);
        maxInput->setObjectName(QStringLiteral("maxInput"));

        gridLayout->addWidget(maxInput, 5, 1, 1, 1);

        ipInput = new QLineEdit(widget);
        ipInput->setObjectName(QStringLiteral("ipInput"));

        gridLayout->addWidget(ipInput, 1, 0, 1, 2);

        textDisplay = new QTextBrowser(widget);
        textDisplay->setObjectName(QStringLiteral("textDisplay"));

        gridLayout->addWidget(textDisplay, 1, 2, 8, 1);

        minInput = new QSpinBox(widget);
        minInput->setObjectName(QStringLiteral("minInput"));

        gridLayout->addWidget(minInput, 5, 0, 1, 1);

        timingInput = new QSpinBox(widget);
        timingInput->setObjectName(QStringLiteral("timingInput"));

        gridLayout->addWidget(timingInput, 7, 0, 1, 2);

        startButton = new QPushButton(widget);
        startButton->setObjectName(QStringLiteral("startButton"));

        gridLayout->addWidget(startButton, 8, 0, 1, 1);

        stopButton = new QPushButton(widget);
        stopButton->setObjectName(QStringLiteral("stopButton"));

        gridLayout->addWidget(stopButton, 8, 1, 1, 1);

        connectButton = new QPushButton(widget);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        gridLayout->addWidget(connectButton, 3, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 4, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        ipInput->raise();
        connectButton->raise();
        disconnectButton->raise();
        startButton->raise();
        stopButton->raise();
        ipInput->raise();
        minInput->raise();
        maxInput->raise();
        timingInput->raise();
        textDisplay->raise();
        label_4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 492, 21));
        menuClient_Producer = new QMenu(menuBar);
        menuClient_Producer->setObjectName(QStringLiteral("menuClient_Producer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuClient_Producer->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        disconnectButton->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        startButton->setText(QApplication::translate("MainWindow", "Start", Q_NULLPTR));
        stopButton->setText(QApplication::translate("MainWindow", "Stop", Q_NULLPTR));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Timing(s)", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Ip", Q_NULLPTR));
        menuClient_Producer->setTitle(QApplication::translate("MainWindow", "Client Producer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
