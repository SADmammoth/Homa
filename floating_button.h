#ifndef FLOATING_BUTTON_H
#define FLOATING_BUTTON_H

#include <QtWidgets>
using namespace Qt;

namespace Ui {
class floating_button;
}

class floating_button : public QWidget
{
    Q_OBJECT

public:
    explicit floating_button(QWidget *parent = nullptr);
    ~floating_button();
signals:
    void byname();
    void bymanuf();
    void bydate();
    void bycount();
public slots:
    void show_dialog();
    void name();
    void manuf();
    void date();
    void count();
private:
    Ui::floating_button *ui;
};

#endif // FLOATING_BUTTON_H
