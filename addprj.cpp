#include "addprj.h"
#include "ui_addprj.h"
#include <QFileDialog>
#include "MainMenu.h"
#include "projecttab.h"
#include "TableService.h"
#include "ListTab.h"
#include "yarncard.h"

AddPrj::AddPrj(MainMenu* menu, QString* name, QString* desc, QString* image_path, list<Node*>* lst, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AddPrj), menu(menu), name(new QString("")), picture(new QString("")), desc(new QString(""))
{
    ui->setupUi(this);
    connect(ui->pic, SIGNAL(clicked()), this, SLOT(file_dialog()));
    ui->name->setPlaceholderText("Название проекта");
    ui->desc->setPlaceholderText("Описание проекта");
    if(name){
        ui->name->setText(*name);
        this->name = new QString(*name);
    }
    if(desc){
        ui->desc->setText(*desc);
        this->desc = new QString(*desc);
    }
    if(image_path){
        QPalette p;
        picture = new QString(*image_path);
        QPixmap pic(*picture);
        pic = pic.scaled(ui->pic->size(),Qt::KeepAspectRatioByExpanding);
        p.setBrush(ui->pic->backgroundRole(), pic);
        ui->pic->setPalette(p);
    }
    else{
        QPalette p;
        picture = new QString("D:/Downloads/pictureplaceholder.png");
        QPixmap pic(*picture);
        pic = pic.scaled(ui->pic->size(),Qt::KeepAspectRatioByExpanding);
        p.setBrush(ui->pic->backgroundRole(), pic);
        ui->pic->setPalette(p);
    }
    if(lst){
        this->lst = new list<Node*>(*lst);
        for(auto i = lst->begin(); i != lst->end(); i++){
            ui->yarnwid->layout()->addWidget(new YarnCard(menu->go_proj_tab->prj_table, (*i)->Get()));
        }
        ui->addyarn->setText("Изменить");
    }
    connect(ui->name, SIGNAL(editingFinished()), this, SLOT(save_name()));
    connect(ui->desc, SIGNAL(textChanged()), this, SLOT(save_desc()));
    connect(ui->back, SIGNAL(clicked()), this, SLOT(back()));
    connect(ui->del, SIGNAL(clicked()), this, SLOT(dlte()));
    connect(ui->addyarn, SIGNAL(clicked()), this, SLOT(showyarn()));
}

void AddPrj::showyarn(){
    lsttab = new ListTab(menu, true);
    lsttab->showMaximized();
    connect(lsttab, SIGNAL(saved()), this, SLOT(add()));
}

void AddPrj::add(){
    while(QLayoutItem* item = ui->yarnwid->layout()->takeAt(1)){
        delete item->widget();
        delete item;
    }

    lst = new std::list<Node*>(*lsttab->getChosen());
    if(!lst){
        ui->addyarn->setText("Добавить пряжу");
        return;
    }
    for(auto i = lst->begin(); i != lst->end(); i++){
        ui->yarnwid->layout()->addWidget(new YarnCard(menu->go_proj_tab->prj_table, (*i)->Get()));
    }
    ui->addyarn->setText("Изменить");
}

void AddPrj::file_dialog(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
            tr("PNG Pictures (*.png), JPG Pictures (*.jpg)"));

        if (fileName != "") {

            QPalette* p = new QPalette;
            picture = new QString(fileName);
            QPixmap pix(*picture);
            pix = pix.scaled(ui->pic->size(),Qt::KeepAspectRatioByExpanding);
            p->setBrush(QPalette::Button, QBrush(pix));
            ui->pic->setPalette(*p);
            }

}

void AddPrj::back(){
    emit changed();
    menu->go_proj_tab->prj_table->Create_Row({New(picture), New(name), New(desc), New(lst)});
    dlte();
}

void AddPrj::dlte(){
    menu->ShowProjects();
    delete this;
}

void AddPrj::save_name(){
    if(ui->name->text() == QString()){return;}
    name = new QString(ui->name->text());
}

void AddPrj::save_desc(){
    if(ui->desc->toPlainText() == QString()){return;}
    desc = new QString(ui->desc->toPlainText());
}

AddPrj::~AddPrj()
{
    delete ui;
}
