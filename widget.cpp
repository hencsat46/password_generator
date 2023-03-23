#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->m_check1->setChecked(true);
    ui->m_check2->setChecked(true);
    ui->m_check3->setChecked(true);



    connect(ui->debug_btn, SIGNAL(clicked()), this, SLOT(m_debug()));

}

Widget::~Widget()
{
    delete ui;
}

void Widget::m_debug() {
    stat_box1 = ui->m_check1->isChecked();
    stat_box2 = ui->m_check2->isChecked();
    stat_box3 = ui->m_check3->isChecked();
    ui->m_debuglbl->setText(check_box(stat_box1));
    ui->m_debuglbl->setText(check_box(stat_box1));
    ui->m_debuglbl->setText(check_box(stat_box1));
}

QString Widget::check_box(bool status) {
    if (status) return "true";
    return "false";
}
