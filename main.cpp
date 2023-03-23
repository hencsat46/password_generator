#include "widget.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Deb d;
    w.show();
    d.show();
    return a.exec();
}
