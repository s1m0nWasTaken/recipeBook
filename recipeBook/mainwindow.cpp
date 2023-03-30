#include <QListWidgetItem>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "popUp.h"
#include "recipepage.h"
#include "ingredients.h"
#include "QListWidgetItem"
#include "QString"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("test");
    for (int i = 0; i < 5; i++)
    {
        recipes[i] = new recipe;
        recipes[i]->setText("test " + to_string(i));
        recipes[i]->setName("test " + std::to_string(i));

        vector<ingredients> *ingr = new vector<ingredients>;

        for (int j = 0; j < 3; j++)
        {
            ingredients *temp = new ingredients(20.0, i, "test ingr" + to_string(i));
            ingr->push_back(*temp);
        }

        recipes[i]->setListIngredients(*ingr);

        recipes[i]->setCuisine(1);

        QListWidgetItem *item = new QListWidgetItem;
        item->setData(1, i);
        item->setText(QString::fromStdString(recipes[i]->getName()));

        ui->listWidget->addItem(item);
    }

    page = new recipePage(this);
    connect(ui->listWidget, &QListWidget::itemClicked, page, &recipePage::show);
    connect(this, SIGNAL(sendRecipe(recipe)), page, SLOT(addRecipe(recipe)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    int address = item->data(1).toInt();
    emit(sendRecipe(*(recipes[address])));
}

template<class T>
void showWindow(T window)
{
    window.show();
}


void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    bool milk = ui->checkBox->isChecked();
    bool nut = ui->checkBox_2->isChecked();
    bool wheat = ui->checkBox_3->isChecked();
    bool egg = ui->checkBox_4->isChecked();
    int pos = 0;

    for (recipe *i: recipes)
    {
        recipe test = *i;
        for (ingredients j: i->getListIngredients())
        {
            if (milk && j.getAllergies(1))
            {
                continue;
            }
            if (nut && j.getAllergies(2))
            {
                continue;
            }
            if (wheat && j.getAllergies(3))
            {
                continue;
            }
            if (egg && j.getAllergies(4))
            {
                continue;
            }
        }

        bool addItem = false;

        if (ui->polish->isChecked() && i->getCuisine(1))
        {
            addItem = true;
        }
        if (ui->italian->isChecked() && i->getCuisine(2))
        {
            addItem = true;
        }
        if (ui->ukrainian->isChecked() && i->getCuisine(3))
        {
            addItem = true;
        }
        if (ui->russian->isChecked() && i->getCuisine(4))
        {
            addItem = true;
        }

        if (addItem)
        {
            QListWidgetItem *item = new QListWidgetItem;
            item->setData(1, pos);
            item->setText(QString::fromStdString(i->getName()));
            ui->listWidget->addItem(item);
        }

        pos++;
    }
}

