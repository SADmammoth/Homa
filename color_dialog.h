#ifndef COLOR_DIALOG_H
#define COLOR_DIALOG_H

#include <QWidget>

namespace Ui {
class color_dialog;
}

class color_dialog : public QWidget
{
    Q_OBJECT

public:
    explicit color_dialog(QWidget *parent = nullptr);
    QColor& getColor();
    ~color_dialog();
private slots:
    void yellow();
    void blue();
    void red();
    void green();
    void black();
signals:
    void chosen();
private:
    Ui::color_dialog *ui;
    QColor* color;
};

#endif // COLOR_DIALOG_H
