#include "recipepage.h"
#include "ui_recipepage.h"

recipePage::recipePage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::recipePage)
{
    ui->setupUi(this);
}

recipePage::~recipePage()
{
    delete ui;
}
