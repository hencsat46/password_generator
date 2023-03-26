#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <cstdlib>
#include <QApplication>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->m_check1->setChecked(true);
    ui->m_check2->setChecked(true);
    ui->m_check3->setChecked(true);
    ui->e_passw->setVisible(false);
    QPalette palette = ui->e_passw->palette();
    palette.setColor(ui->e_passw->foregroundRole(), Qt::red);
    ui->e_passw->setPalette(palette);
    ui->m_copied->setVisible(false);

    connect(ui->m_genButton, SIGNAL(clicked()), this, SLOT(generation()));
    connect(ui->debug_btn, SIGNAL(clicked()), this, SLOT(show_debug()));
    connect(ui->m_copy, SIGNAL(clicked()), this, SLOT(copy()));
}

Widget::~Widget()
{
    delete ui;
}


QString Widget::check_box(bool status) {
    if (status) return "true";
    return "false";
}

void Widget::show_debug() {
    qDebug() << this->ui->m_password->toMarkdown();
}

QString Widget::gen_char(int start, int end) {
    QString c_string = "";
    for (int i = start; i <= end; ++i) c_string.append((char)i);
    return c_string;
}

void Widget::generation() {
    this->gen_password(ui->m_check1->isChecked(), ui->m_check2->isChecked(), ui->m_check3->isChecked(), ui->m_check4->isChecked(), ui->comboBox->currentText().toInt());
}

void Widget::gen_password(bool upper, bool lower, bool numbers, bool symbols, int count) {
    QString str = "";
    QString passw = "";

    if (upper) str.append(Widget::gen_char(65, 90));

    if (lower) str.append(Widget::gen_char(97, 122));

    if (numbers) str.append(Widget::gen_char(48, 57));

    if (symbols) str.append("{}[]()/\\'\"`~,;:.<>");

    if ((int)str.size() == 0) {
        this->ui->e_passw->setVisible(true);
        return;
    }
    srand((unsigned) time(NULL));
    for (int i = 0; i < count; ++i) {
        passw.append(str[rand() % str.size()]);
    }

    ui->m_password->setText(passw);

}

void Widget::copy() {
    QClipboard* clip = QApplication::clipboard();
    QString clip_text = this->ui->m_password->toMarkdown();
    clip->setText(clip_text.mid(0, clip_text.size() - 2));


}



