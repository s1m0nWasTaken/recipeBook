#include "popup.h"
#include "ui_popup.h"

popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);
}

popUp::~popUp()
{
    delete ui;
}
