#include "rangesearch.h"
#include "ui_rangesearch.h"
#include "TableService.h"
#include "MainMenu.h"

rangesearch::rangesearch(MainMenu* menu, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rangesearch), menu(menu), col(3)
{
    ui->setupUi(this);
    ui->spinBox_3->hide();
    ui->spinBox_4->hide();
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this, SLOT(choose()));
    connect(ui->find, SIGNAL(clicked()), this, SLOT(find()));
    connect(ui->back, SIGNAL(clicked()), this, SLOT(back()));
}

void rangesearch::back(){
    delete this;
}

void rangesearch::choose(){
    if(ui->comboBox->currentIndex() == 0){
        col = 3;
        ui->spinBox_3->hide();
        ui->spinBox_4->hide();
    }
    if(ui->comboBox->currentIndex() == 1){
        col = 4;
        ui->spinBox_3->show();
        ui->spinBox_4->show();
    }
}

void rangesearch::find()
{
     list<Node*>* stk;
    if(ui->spinBox->value() == -1 && !ui->spinBox_2->value() == -1){
        QMessageBox::critical(this, "", "Введите корректный диапазон");
    }
    if(ui->comboBox->currentIndex()== 2){
    if(!ui->spinBox_3->value() == -1 && !ui->spinBox_4->value() == -1 ){
        QMessageBox::critical(this, "", "Введите корректный диапазон");
    }
      stk = menu->table->FindRange(new NodeFootage(new Footage{ui->spinBox->value(), ui->spinBox_3->value()}),
                     new NodeFootage(new Footage{ui->spinBox_2->value(), ui->spinBox_4->value()}), col);
    }
    else{
      stk = menu->table->FindRange(new NodeNumeric(ui->spinBox->value()), new NodeNumeric(ui->spinBox_2->value()), col);
    }
    menu->ShowSearchList(stk);
}

rangesearch::~rangesearch()
{
    delete ui;
}
