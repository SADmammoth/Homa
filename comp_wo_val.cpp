#include "comp_wo_val.h"
#include "ui_comp_wo_val.h"

comp_wo_val::comp_wo_val(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::comp_wo_val)
{
    ui->setupUi(this);
}

comp_wo_val::~comp_wo_val()
{
    delete ui;
}
