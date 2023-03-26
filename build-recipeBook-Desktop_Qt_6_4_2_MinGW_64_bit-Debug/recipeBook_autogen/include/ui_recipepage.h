/********************************************************************************
** Form generated from reading UI file 'recipepage.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEPAGE_H
#define UI_RECIPEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_recipePage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QTextEdit *textEdit;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *recipePage)
    {
        if (recipePage->objectName().isEmpty())
            recipePage->setObjectName("recipePage");
        recipePage->resize(966, 649);
        centralwidget = new QWidget(recipePage);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        verticalLayout->addWidget(graphicsView);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        listView = new QListView(centralwidget);
        listView->setObjectName("listView");

        gridLayout->addWidget(listView, 0, 1, 1, 1);

        recipePage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(recipePage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 966, 25));
        recipePage->setMenuBar(menubar);
        statusbar = new QStatusBar(recipePage);
        statusbar->setObjectName("statusbar");
        recipePage->setStatusBar(statusbar);

        retranslateUi(recipePage);

        QMetaObject::connectSlotsByName(recipePage);
    } // setupUi

    void retranslateUi(QMainWindow *recipePage)
    {
        recipePage->setWindowTitle(QCoreApplication::translate("recipePage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class recipePage: public Ui_recipePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEPAGE_H
