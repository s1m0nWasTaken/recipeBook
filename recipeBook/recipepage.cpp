#include "recipepage.h"
#include "mainwindow.h"
#include <QString>
#include "ui_recipepage.h"
#include "QPixmap"

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
    ui->listWidget->clear();

    QPixmap img(QString::fromStdString(recipeInput.getImage()));
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));

    for (auto i: recipeInput.getListIngredients())
    {
        i.toString();
        ui->listWidget->addItem(QString::fromStdString(i.toString()));
    }
}

void recipePage::on_horizontalSlider_valueChanged(int value)
{
    if (value < 50)
    {
        QPixmap img(QString::fromStdString(recipeInput.getImage()));
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
    } else
    {
        QPixmap img(QString::fromStdString(recipeInput.getImage2()));
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
    }
}

