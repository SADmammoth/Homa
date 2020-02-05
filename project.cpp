#include "project.h"
#include "ui_project.h"
#include "TableService.h"
#include "yarncard.h"
#include "addprj.h"
#include "MainMenu.h"
#include "projecttab.h"

Project::Project(MainMenu* menu, Node* prj, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Project), node(prj), desc(0), name(0), image_path(0), yarn(0), menu(menu)
{
    ui->setupUi(this);
    Pick();
    ui->name->setText(*name);
    if(desc){
        ui->desc->setText(*desc);
    }
    if(image_path){
        QPixmap pic(*image_path);
        pic = pic.scaled(ui->pic->size(), Qt::KeepAspectRatioByExpanding);
        ui->pic->setPixmap(pic);
    }
    if(yarn){
        QLayoutItem* item = ui->scrollAreaWidgetContents->layout()->takeAt(0);
        delete item->widget();
        delete item;
        for(auto i = yarn->begin(); i != yarn->end(); i++){
            ui->scrollAreaWidgetContents->layout()->addWidget(new YarnCard(menu->table, (*i)->Get()));
        }
    }
}

void Project::mousePressEvent(QMouseEvent *event){
    if(event->button() == Qt::LeftButton){
       menu->go_proj_tab->prj_table->Delete(node->Get());
       AddPrj* add = new AddPrj(menu, name, desc, image_path, yarn);
       add->showMaximized();
    }
    else{
        QWidget::mousePressEvent(event);
    }
}

void Project::Pick(){
    stack<Node*>* stk = new stack<Node*>(*node->Get());

    QString* str = (QString*)stk->top()->GetVal();
    if(*str != ""){
        image_path = new QString(*str);
    }
    stk->pop();
    name = new QString(*(QString*)stk->top()->GetVal());

    stk->pop();
    str = (QString*)stk->top()->GetVal();
   if(*str != ""){
       desc = new QString(*str);
   }
    stk->pop();
    list<Node*>* lst;
    lst = (list<Node*>*)stk->top()->GetVal();
    if(lst && lst->size()){
        yarn = new list<Node*>(*lst);
    }


}

Project::~Project()
{
    delete ui;
}
