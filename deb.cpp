#include "deb.h"
#include "ui_deb.h"

Deb::Deb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Deb)
{
    ui->setupUi(this);
}

Deb::~Deb()
{
    delete ui;
}
