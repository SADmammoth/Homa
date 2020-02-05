#include "searchtab.h"
#include "ui_searchtab.h"
#include "TableService.h"
#include "rangesearch.h"
#include "addcomponentwidget.h"
#include "Table/color_conversion.h"
#include "color_dialog.h"

SearchTab::SearchTab(MainMenu* menu, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SearchTab), menu(menu), name(0), manufac(0), amount(0), footage(0), color(0), cmpnts(0)
{
    ui->setupUi(this);
    connect(ui->nameLine, SIGNAL(editingFinished()), this, SLOT(setname()));
    connect(ui->destribLine, SIGNAL(editingFinished()), this, SLOT(setmanufac()));
    connect(ui->amount, SIGNAL(editingFinished()), this, SLOT(setamount()));
    connect(ui->line2, SIGNAL(editingFinished()), this, SLOT(setfootage()));
    connect(ui->find, SIGNAL(clicked()), this, SLOT(Find()));
    connect(ui->back, SIGNAL(clicked()), this, SLOT(goback()));
    connect(ui->range, SIGNAL(clicked()), this, SLOT(Range()));
    connect(ui->addnewcomp, SIGNAL(clicked()), this, SLOT(comp_dialog()));
    connect(ui->color, SIGNAL(clicked()), this, SLOT(color_dialog()));
}

void SearchTab::setname(){
    if(ui->nameLine->text() == QString()){return;}
    name = new QString(ui->nameLine->text());
}

void SearchTab::setmanufac(){
    if(ui->destribLine->text() == QString()){return;}
    manufac = new QString(ui->destribLine->text());
}

void SearchTab::setamount(){
    if(ui->amount->text() == QString()){return;}
    amount = new int(ui->amount->text().toInt());
}

void SearchTab::setfootage(){
    if(ui->line1->text() == QString() || ui->line2->text() == QString()){return;}
    footage = new Footage{ui->line1->text().toInt(), ui->line2->text().toInt()};
}

void SearchTab::color_dialog(){
    dialg = new   class color_dialog();
    dialg->move(ui->color->pos().rx(), ui->color->pos().ry()+3*ui->color->height());
    dialg->setWindowFlag(Qt::Popup);
    dialg->show();
    connect(dialg, SIGNAL(chosen()), this, SLOT(save_clr()));
}

void SearchTab::save_clr(){
    color = new QColor(dialg->getColor());
    ui->color->setPalette(*color);
}

void SearchTab::goback(){
    menu->show();
    delete this;
}

void SearchTab::Find(){
    this->hide();
    menu->ShowSearchList(menu->table->FindExact(new Yarn_saveobj(name, manufac, nullptr, footage, nullptr, nullptr, nullptr, amount, color, cmpnts)));
}

void SearchTab::comp_dialog(){
    dialog = new AddComponentWidget(true);
    dialog->setWindowFlag(Qt::FramelessWindowHint);
    dialog->show();
    connect(dialog, SIGNAL(saved()), this, SLOT(add_comp()));
}

void SearchTab::add_comp(){
        multiset<Component>* s = dialog->GetComponents();
        while (QLayoutItem* item = ui->componentwidget->layout()->takeAt(1)) {
            delete item->widget();
            delete item;
        }
        if(s){
            ui->addnewcomp->hide();

            cmpnts = s;
            auto lst = s->begin();
            for(lst; lst != s->end()--; lst++){
                ui->componentwidget->layout()->addWidget(new component(new Component(*lst), false, false, nullptr, false));
            }
    //        if(typeid(*ui->componentwidget->layout()->takeAt(0)->widget()).name() != typeid(component).name()){
            QPalette pal;
            QPixmap pic("D:/Downloads/addbutton.png");
            QPushButton* AddButton = new QPushButton;
            AddButton->resize(400, 200);
            pic = pic.scaled(AddButton->size());
            pal.setBrush(AddButton->backgroundRole(), pic);
            AddButton->setPalette(pal);
            ui->componentwidget->layout()->addWidget(AddButton);
            connect(AddButton, SIGNAL(clicked()), this, SLOT(comp_dialog()));
    //        }
        }
            else{
                ui->addnewcomp->show();
            }
}

void SearchTab::Range(){
    rangesearch* rs = new rangesearch(menu);
    rs->setWindowFlag(Qt::FramelessWindowHint);
    rs->show();
}
SearchTab::~SearchTab()
{
    delete ui;
}
