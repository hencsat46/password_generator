#ifndef DEB_H
#define DEB_H

#include <QWidget>

namespace Ui {
    class Deb;
}

class Deb : public QWidget
{
    Q_OBJECT

public:
    explicit Deb(QWidget *parent = nullptr);
    ~Deb();

private:
    Ui::Deb *ui;
};

#endif // DEB_H
