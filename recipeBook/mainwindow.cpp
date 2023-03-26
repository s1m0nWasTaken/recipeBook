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

