#include "widget.h"
#include "ui_widget.h"
#include "debug_window.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->m_check1->setChecked(true);
    ui->m_check2->setChecked(true);
    ui->m_check3->setChecked(true);




    connect(ui->window_show, SIGNAL(clicked()), this, SLOT(show_dwindow()));


}

Widget::~Widget()
{
    delete ui;
}


QString Widget::check_box(bool status) {
    if (status) return "true";
    return "false";
}

void Widget::s_debugtext() {
    //debug_w.ui->debug_label->setText("a");
}

void Widget::show_dwindow() {
    debug_w.show();
    //connect(ui->debug_btn, SIGNAL(clicked()), debug_w, SLOT(s_debugtext()));
}
