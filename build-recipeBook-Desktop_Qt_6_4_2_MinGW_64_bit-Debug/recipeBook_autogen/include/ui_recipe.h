/********************************************************************************
** Form generated from reading UI file 'recipe.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_H
#define UI_RECIPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QListView>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QListView *listView;
    QGraphicsView *graphicsView;

    void setupUi(QDialog *Recipe)
    {
        if (Recipe->objectName().isEmpty())
            Recipe->setObjectName("Recipe");
        Recipe->resize(966, 649);
        scrollArea = new QScrollArea(Recipe);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(40, 330, 661, 271));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 659, 269));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 661, 511));
        scrollArea->setWidget(scrollAreaWidgetContents);
        listView = new QListView(Recipe);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(775, 40, 181, 561));
        graphicsView = new QGraphicsView(Recipe);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(40, 40, 661, 271));

        retranslateUi(Recipe);

        QMetaObject::connectSlotsByName(Recipe);
    } // setupUi

    void retranslateUi(QDialog *Recipe)
    {
        Recipe->setWindowTitle(QCoreApplication::translate("Recipe", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe: public Ui_Recipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_H
