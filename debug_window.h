#ifndef DEBUG_WINDOW_H
#define DEBUG_WINDOW_H

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
    Ui::Deb *ui;
    void show_text(const QString &string);

public slots:
    void sh_debug();

private:

};

#endif // DEBUG_WINDOW_H
