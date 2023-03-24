#include "debug_window.h"
#include "ui_debug_window.h"

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

void Deb::sh_debug() {
    show_text("signal works");
}

void Deb::show_text(const QString &string) {
    ui->debug_label->setText(string);
}

