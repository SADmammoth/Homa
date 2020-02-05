#include "ListTab.h"
#include "TableService.h"
#include "yarncard.h"
#include "MainMenu.h"
#include "floating_button.h"
#include "searchtab.h"
#include "fullcard.h"

#define COUNT_OF_YARN 4

ListTab::ListTab(MainMenu* menu, bool list_to_choose, QWidget* parent):QMainWindow(parent),
    ui(new Ui::LstTab), menu(menu), list_to_choose(list_to_choose), chosen(0){
    ui->setupUi(this);
    if(list_to_choose){
        ui->search->hide();
        connect(ui->save, SIGNAL(clicked()), this, SLOT(save()));
    }
    else{
         ui->save->hide();
         connect(ui->search, SIGNAL(clicked()), this, SLOT(search()));
    }
    connect(ui->back, SIGNAL(clicked()), this, SLOT(back()));
    connect(ui->sort, SIGNAL(clicked()), this, SLOT(sort()));
    ui->search->setEnabled(true);
    ui->sort->setEnabled(true);
    Show();
    ui->all->setText(QString("Всего: ")+to_string(menu->table->Rows()).c_str());
     ui->scrollArea->resize(qApp->desktop()->size());

}

void ListTab::Show(){
    while (QLayoutItem* item = ui->verticalLayout->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    while (QLayoutItem* item = ui->verticalLayout_2->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    while (QLayoutItem* item = ui->verticalLayout_3->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    if(!menu->table || !menu->table->Rows()){
        QLabel* empty = new QLabel("Так пусто... Попробуйте добавить сюда что то новое");
        empty->setFont(QFont("Segoe UI", 20));
        empty->setAlignment(Qt::AlignmentFlag::AlignHCenter);
        ui->verticalLayout_2->addStretch();
        ui->verticalLayout_2->addWidget(empty);
        ui->verticalLayout_2->addStretch();
        ui->search->setEnabled(false);
        ui->sort->setEnabled(false);
        ui->all->setText("");
        return;
    }
    auto beg = menu->table->GetSORTBYIter();


    auto end = menu->table->GetBackOfSortBy();
    YarnCard* yarncard;
    QVBoxLayout** grid = new QVBoxLayout*[3];
    grid[0] =  ui->verticalLayout;
    grid[1] =  ui->verticalLayout_2;
    grid[2] =  ui->verticalLayout_3;
   while(1){
       for(int i = 0; i < 3; i++){
                yarncard = new YarnCard(menu->table, (*beg).GetPtr()->Get(), list_to_choose);
                if(list_to_choose){
                    connect(yarncard, SIGNAL(chosen(YarnCard*)), this, SLOT(add(YarnCard*)));
                }
                connect(yarncard, SIGNAL(reload()), this, SLOT(Show()));

                grid[i]->addWidget(yarncard);
                beg++;
                if( beg == end){
                     ui->verticalLayout->addStretch();
                     ui->verticalLayout_2->addStretch();
                     ui->verticalLayout_3->addStretch();
                    return;
                }

       }
       }

}

void ListTab::sort(){
   floating_button* wid = new floating_button;
   wid->setWindowFlag(Qt::Popup);
   wid->move(ui->sort->pos().rx()-(wid->width())+(ui->sort->width()), ui->sort->pos().ry()+ui->sort->height()-wid->height());
   wid->show();
   connect(wid, SIGNAL(bymanuf()), this, SLOT(setmanuf()));
   connect(wid, SIGNAL(byname()), this, SLOT(setname()));
   connect(wid, SIGNAL(bycount()), this, SLOT(setcount()));
   connect(wid, SIGNAL(bydate()), this, SLOT(setdate()));
}

void ListTab::save(){
    emit saved();
    back();
}

void ListTab::search(){
    SearchTab* srch = new SearchTab(menu);
    srch->showMaximized();
    delete this;
}
void ListTab::setname(){
    menu->table->SetSortBy(1);
    Show();

}
void ListTab::setmanuf(){
      menu->table->SetSortBy(2);
      Show();
}
void ListTab::setdate()
{
     menu->table->SetSortBy(5);
     Show();
}
void ListTab::setcount()
{
    menu->table->SetSortBy(3);
    Show();
}

void ListTab::back(){
    menu->table->SetSortBy(1);
    if(!list_to_choose){
        menu->showMaximized();
    }
    delete this;
}



void ListTab::Show(list<Node*>* vec){
    while (QLayoutItem* item = ui->verticalLayout->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    while (QLayoutItem* item = ui->verticalLayout_2->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    while (QLayoutItem* item = ui->verticalLayout_3->takeAt(0)) {
        delete item->widget();
        delete item;
    }
    if(!vec){
        QLabel* empty = new QLabel("По запросу ничего не найдено");
        empty->setFont(QFont("Segoe UI", 20));
        empty->setAlignment(Qt::AlignmentFlag::AlignHCenter);
        ui->verticalLayout_2->addStretch();
        ui->verticalLayout_2->addWidget(empty);
        ui->verticalLayout_2->addStretch();
        ui->search->setEnabled(false);
        ui->sort->setEnabled(false);
    }
    else{
        qDebug()<<"Ss";
    list<Node*>* lst = new list<Node*>(*vec);
    auto beg = lst->begin();
    auto end = lst->end()--;
    QVBoxLayout** grid = new QVBoxLayout*[3];
    grid[0] =  ui->verticalLayout;
    grid[1] =  ui->verticalLayout_2;
    grid[2] =  ui->verticalLayout_3;

   while(1){
       for(int i = 0; i < 3; i++){
        grid[i]->addWidget(new YarnCard(menu->table, (*beg)->Get()));
        beg++;
        if(beg == end){
             ui->verticalLayout->addStretch();
             ui->verticalLayout_2->addStretch();
             ui->verticalLayout_3->addStretch();
            return;
        }
            }
    }
    }
}

void ListTab::add(YarnCard* card){
    if(!chosen){
        chosen = new list<Node*>();
    }
    if(chosen->size() == COUNT_OF_YARN){
        QMessageBox::critical(this, "",
     QString("Невозможно добавить к проекту более ")+to_string(COUNT_OF_YARN).c_str()+" видов пряжи");
        card->setPalette(QColor(255, 255, 255));
        return;
    }
    chosen->push_back(card->stk->top());
}

list<Node*>* ListTab::getChosen(){
    return chosen;
}
ListTab::~ListTab(){
    delete ui;
}

void ListTab::on_back_clicked()
{

}
