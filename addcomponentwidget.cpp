#include "addcomponentwidget.h"
#include "TableService.h"
#include "ui_addcomponentwidget.h"
#include <QtWinExtras/QtWin>


AddComponentWidget::AddComponentWidget(bool is_for_search, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddComponentWidget), is_for_search(is_for_search)
{
    ui->setupUi(this);

    SetComponentNames({"Ангора", "Мохер", "Кашемир", "Верблюд", "Шелк",
                       "Альпака", "Як", "Ягненок",
                       "Шерсть", "Хлопок", "Лен",
                       "Бамбук", "Конопля", "Вискоза"});
    complist = new std::list<Component>;
    std::list<QString>::iterator beg = component_names->begin();
    int i = 0;
    int j = 0;
    Component* comp;
    for(i=0; beg != component_names->end()--;i++){
        for(j=0; j < 4 && beg != component_names->end()--; beg++, j++){
            ui->gridLayout->addWidget(new component(new Component(*beg, 0), true, false, complist, !is_for_search), i, j);
        }
    }
    QPalette pal;
    QPixmap pic("D:/Downloads/addbutton.png");
    ui->AddButton->resize(400, 200);
    pic = pic.scaled(ui->AddButton->size());
    pal.setBrush(ui->AddButton->backgroundRole(), pic);
    ui->AddButton->setPalette(pal);
    ui->gridLayout->addWidget(ui->AddButton);
    connect(ui->AddButton, SIGNAL(clicked()), this, SLOT(add_new()));
    connect(ui->Save, SIGNAL(clicked()), this, SLOT(save()));
    connect(ui->Cancel, SIGNAL(clicked()), this, SLOT(close()));
}

void AddComponentWidget::SetComponentNames(initializer_list<QString> lst){
    component_names = new list<QString>(lst);
}

void AddComponentWidget::add_new(){
     ui->gridLayout->replaceWidget(ui->AddButton, new component(nullptr, true, true, complist, !is_for_search));
     ui->gridLayout->addWidget(ui->AddButton);
}
multiset<Component>* AddComponentWidget::GetComponents(){
    if(!complist->size()){
        return nullptr;
    }
    multiset<Component>* s = new multiset<Component>;
    for(auto iter = complist->begin(); iter != complist->end(); iter++){
        s->insert(*iter);
    }
    return s;
}

void AddComponentWidget::save(){
    int total = 0;
     complist->remove(Component(nullptr, 0));
    for(auto iter = complist->begin(); iter != complist->end(); iter++){
            total += (*iter).percentage;
            if(total > 100){
                QMessageBox::critical(qApp->desktop(), "", "Компоненты составляют больше 100%!");
                return;
            }

    }

    emit saved();
    this->hide();
}

void AddComponentWidget::close(){
    delete complist;
    delete this;
 }

AddComponentWidget::~AddComponentWidget()
{
    delete complist;
    delete component_names;
    delete ui;
}
