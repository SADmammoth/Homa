#ifndef COMP_WO_VAL_H
#define COMP_WO_VAL_H

#include <QWidget>

namespace Ui {
class comp_wo_val;
}

class comp_wo_val : public QWidget
{
    Q_OBJECT

public:
    explicit comp_wo_val(QWidget *parent = nullptr);
    ~comp_wo_val();

private:
    Ui::comp_wo_val *ui;
};

#endif // COMP_WO_VAL_H
