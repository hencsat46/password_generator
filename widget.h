#ifndef WIDGET_H
#define WIDGET_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT



public:
    Widget(QWidget *parent = nullptr);
    bool stat_box1, stat_box2, stat_box3;
    ~Widget();
    QString check_box(bool status);


private:
    void gen_password(bool upper, bool lower, bool numbers, bool symbols, int count);
    QString gen_char(int start, int end);
    Ui::Widget *ui;
    void copy_life();

public slots:
    void show_debug();
    void generation();
    void copy();
};
#endif // WIDGET_H
