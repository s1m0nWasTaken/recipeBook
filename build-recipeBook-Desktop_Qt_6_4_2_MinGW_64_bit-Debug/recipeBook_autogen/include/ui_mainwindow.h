/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReset;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QRadioButton *polish;
    QRadioButton *italian;
    QRadioButton *ukrainian;
    QRadioButton *russian;
    QRadioButton *radioButton;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuSearch;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(label);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_2->addWidget(checkBox_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 50));
        label_2->setMaximumSize(QSize(16777215, 50));

        verticalLayout_3->addWidget(label_2);

        polish = new QRadioButton(centralwidget);
        polish->setObjectName("polish");

        verticalLayout_3->addWidget(polish);

        italian = new QRadioButton(centralwidget);
        italian->setObjectName("italian");

        verticalLayout_3->addWidget(italian);

        ukrainian = new QRadioButton(centralwidget);
        ukrainian->setObjectName("ukrainian");

        verticalLayout_3->addWidget(ukrainian);

        russian = new QRadioButton(centralwidget);
        russian->setObjectName("russian");

        verticalLayout_3->addWidget(russian);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setChecked(true);

        verticalLayout_3->addWidget(radioButton);


        gridLayout->addLayout(verticalLayout_3, 0, 1, 1, 2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        gridLayout->addWidget(listWidget, 1, 0, 1, 3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 2, 0, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName("menuSearch");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuSearch->menuAction());
        menuSearch->addAction(actionReset);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select your Allergies", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Milk", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Nut", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Wheat", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Egg", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select cousine type", nullptr));
        polish->setText(QCoreApplication::translate("MainWindow", "Polish", nullptr));
        italian->setText(QCoreApplication::translate("MainWindow", "Italian", nullptr));
        ukrainian->setText(QCoreApplication::translate("MainWindow", "Ukrainian", nullptr));
        russian->setText(QCoreApplication::translate("MainWindow", "Russian", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Any", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainWindow", "Filters", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
