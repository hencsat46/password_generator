#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "debug_window.h"

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
    Ui::Widget *ui;
    Deb *debug_w;
};
#endif // WIDGET_H
