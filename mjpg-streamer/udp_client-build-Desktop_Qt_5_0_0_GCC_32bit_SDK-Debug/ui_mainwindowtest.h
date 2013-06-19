/********************************************************************************
** Form generated from reading UI file 'mainwindowtest.ui'
**
** Created: Sat Mar 9 15:02:47 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWTEST_H
#define UI_MAINWINDOWTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowTest
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowTest)
    {
        if (MainWindowTest->objectName().isEmpty())
            MainWindowTest->setObjectName(QStringLiteral("MainWindowTest"));
        MainWindowTest->resize(800, 600);
        menubar = new QMenuBar(MainWindowTest);
        menubar->setObjectName(QStringLiteral("menubar"));
        MainWindowTest->setMenuBar(menubar);
        centralwidget = new QWidget(MainWindowTest);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindowTest->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindowTest);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindowTest->setStatusBar(statusbar);

        retranslateUi(MainWindowTest);

        QMetaObject::connectSlotsByName(MainWindowTest);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowTest)
    {
        MainWindowTest->setWindowTitle(QApplication::translate("MainWindowTest", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindowTest: public Ui_MainWindowTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWTEST_H
