#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "popUp.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    popUp *window = new popUp();
    connect(ui->pushButton, &QPushButton::clicked, window, &popUp::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

