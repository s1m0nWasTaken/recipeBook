#include "recipepage.h"
#include "mainwindow.h"
#include <QString>
#include "ui_recipepage.h"

recipePage::recipePage(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::recipePage)
{
    ui->setupUi(this);
    ui->textBrowser->setText(QString::fromStdString(recipeInput.getText()));
}

recipePage::~recipePage()
{
    delete ui;
}

void recipePage::addRecipe(recipe input)
{
    recipeInput = input;
    ui->textBrowser->setText(QString::fromStdString(recipeInput.getText()));

    for (auto i: recipeInput.getListIngredients())
    {
        ui->listWidget->addItem(QString::fromStdString(i.toString()));
    }
}
