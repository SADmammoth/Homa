#include "fullcard.h"
#include "yarncard.h"
#include "ui_fullcard.h"
#include "TableService.h"
#include "AddNewTab.h"
#include "Table/color_conversion.h"

FullCard::FullCard(YarnCard* card, QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::Card), card(card),
    name(0), picture(0), store(0), desc(0), footage(0), amount(0), comp(0),
    manufac(0), date(0), color(0)
{

    ui->setupUi(this);
    this->resize(qApp->desktop()->size());
    stack<Node*> stk = stack<Node*>(*card->stk);
    picture = new QString(*(QString*)stk.top()->GetVal());
    ui->picture->setPixmap(*picture);
    stk.pop();
    name = new QString(*(QString*)stk.top()->GetVal());
    ui->name->setText(*name);
    stk.pop();
    manufac = new QString(*(QString*)stk.top()->GetVal());
    ui->manufac->setText(*manufac);
    stk.pop();
    if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
        amount = new int(*((int*)stk.top()->GetVal()));
    ui->amount->setText(to_string(*amount).c_str());
    }
     stk.pop();
     if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
    footage = new Footage(*(Footage*)stk.top()->GetVal());
    QString foot;
    foot.setNum(footage->length);
    foot += '/';
    foot += to_string(footage->weight).c_str();
    ui->footage->setText(foot);
     }

     stk.pop();

if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
    store = new QString(*(QString*)stk.top()->GetVal());
    ui->store->setText(*store);
}
     stk.pop();
if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
    date = new QDate(*(QDate*)stk.top()->GetVal());
    ui->date->setText((date)->toString());
}
else{
    ui->store->text() == "Пусто";
    ui->widget2->hide();
}

     stk.pop();
if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
     desc = new QString(*(QString*)stk.top()->GetVal());
    ui->text->setText(*desc);
}
else{
    ui->widget3->hide();
}
stk.pop();
if(typeid(*stk.top()).name() != typeid(EMPTY).name()){
    color = new QColor(*(QColor*)stk.top()->GetVal());
    ui->color->setPalette(*color);
}
stk.pop();
if(typeid(*stk.top()).name() != typeid(EMPTY).name()){

    comp = new multiset<Component>(*(multiset<Component>*)stk.top()->GetVal());

    if(comp){

        auto lst = comp->begin();
        for(lst; lst != comp->end()--; lst++){
            ui->componentwidget->layout()->addWidget(new component(new Component(*lst), false, false));
        }
        if(typeid(*ui->componentwidget->layout()->takeAt(0)->widget()).name() != typeid(component).name()){
            ui->no_comp->hide();
        }
    }
    else{
        ui->componentwidget->layout()->takeAt(0)->widget()->show();
    }
}
connect(ui->change, SIGNAL(clicked()), this, SLOT(change()));
connect(ui->back, SIGNAL(clicked()), this, SLOT(back()));
connect(ui->del, SIGNAL(clicked()), this, SLOT(del()));
}

void FullCard::del(){
    card->table->Delete(card->stk);
    rel();
}

void FullCard::rel(){
    emit reload();
    delete this;
}

void FullCard::back(){

    delete this;
}

FullCard::~FullCard()
{
    delete ui;
}

void FullCard::change()
{
    AddNewTab* add = new AddNewTab(picture, name, manufac, amount, footage, store, date, desc, color, comp, card->table);
    add->showMaximized();
    connect(add, SIGNAL(remove()), this, SLOT(del()));
    connect(add, SIGNAL(reload()), this, SLOT(rel()));
}
