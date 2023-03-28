#include <QListWidgetItem>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "popUp.h"
#include "recipepage.h"
#include "QListWidgetItem"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidget->addItem("test");
    for (int i = 0; i < 5; i++)
    {
        recipes[i] = new recipe;
        recipes[i]->setName("test " + std::to_string(i));
        ui->listWidget->addItem(QString::fromStdString(recipes[i]->getName()));
    }
    popUp *window = new popUp();
    connect(ui->pushButton, &QPushButton::clicked, window, &popUp::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)
{
    recipePage *page = new recipePage(this);
    page->show();
//    this->deleteLater();
}

template<class T> void showWindow(T window)
{
    window.show();
}

