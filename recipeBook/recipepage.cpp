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

    QPixmap img("C:/College/GitHub/recipeBook/recipeBook/Best-Lasagna-550-500x500.jpg");
    int w = ui->label->width();
    int h = ui->label->height();
    ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
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

void recipePage::on_horizontalSlider_valueChanged(int value)
{
    if (value < 50)
    {
        QPixmap img("C:/College/GitHub/recipeBook/recipeBook/Best-Lasagna-550-500x500.jpg");
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
    } else
    {
        QPixmap img("C:/College/GitHub/recipeBook/recipeBook/Sourdough-blinis-4-500x500.jpg");
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(img.scaled(w, h, Qt::KeepAspectRatio));
    }
}

