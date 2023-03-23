#include "widget.h"
#include "ui_widget.h"
#include "debug_window.h"
#include "ui_debug_window.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->m_check1->setChecked(true);
    ui->m_check2->setChecked(true);
    ui->m_check3->setChecked(true);
    debug_w = new Deb(this);



    connect(ui->debug_btn, SIGNAL(clicked()), debug_w, SLOT(debug_w->sh_debug()));

    delete debug_w;
}

Widget::~Widget()
{
    delete ui;
}


QString Widget::check_box(bool status) {
    if (status) return "true";
    return "false";
}
