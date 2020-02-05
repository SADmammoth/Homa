#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QMainWindow>

namespace Ui {
class splashscreen;
}

class splashscreen : public QMainWindow
{
    Q_OBJECT

public:
    explicit splashscreen(QWidget *parent = nullptr);
    ~splashscreen();

private:
    Ui::splashscreen *ui;
};

#endif // SPLASHSCREEN_H
