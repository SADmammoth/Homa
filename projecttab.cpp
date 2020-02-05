#include "projecttab.h"
#include "ui_projecttab.h"
#include "addprj.h"
#include "MainMenu.h"
#include "TableService.h"
#include "project.h"

ProjectsTab::ProjectsTab(MainMenu* menu, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProjectTab), menu(menu), prj_table(0)
{
    ui->setupUi(this);
    prj_table = new set_table(4, {t_line, t_line, t_line, t_list}, new Yarn_nodecreator(), 1);
    prj_table->Load(new proj_saveobj(menu->table), "projects.sv");
    connect(ui->back, SIGNAL(clicked()), this, SLOT(back()));
    connect(ui->add, SIGNAL(clicked()), this, SLOT(add()));
}

void ProjectsTab::add(){
    AddPrj* a = new AddPrj(menu);
    a->showMaximized();
    this->hide();
}

void ProjectsTab::Show(){
    this->setWindowFlag(Qt::FramelessWindowHint);
    this->showMaximized();
    while (QLayoutItem* item = ui->proj_layout->takeAt(1)) {
        delete item->widget();
        delete item;
    }
    if(prj_table){
    auto begin = prj_table->GetSORTBYIter();
    auto end = prj_table->GetBackOfSortBy()--;
    for(begin; begin != end; begin++){
       ui->proj_layout->addWidget(new Project(menu, begin->GetPtr()));
    }
    }
}
void ProjectsTab::back(){
    for(auto beg = prj_table->GetSORTBYIter(); beg != prj_table->GetBackOfSortBy(); beg++){
        prj_table->Save(new proj_saveobj(menu->table, beg), "projects.sv");
    }
    menu->show();
    this->hide();
}

ProjectsTab::~ProjectsTab()
{

    delete ui;
    delete prj_table;
}

proj_saveobj::proj_saveobj(set_table* yarntable, QString *name, QString *desc, QString *picture, std::list<Node *> *list)
    :yarntable(yarntable){
    if(name){
        this->name = new QString(*name);
    }
    else{
        this->name = nullptr;
    }
    if(picture){
        this->picture = new  QString(*picture);
    } else{
        this->picture = nullptr;
    }

    if(list){
        this->list = new std::list<Node*>(*list);
    }
    else{
        this->list = nullptr;
    }
}

proj_saveobj::proj_saveobj(set_table* yarntable, set_table::set_iter iter): yarntable(yarntable), name(0), desc(0), picture(0), list(0){
    Set(iter);
}

proj_saveobj::proj_saveobj(set_table* yarntable): yarntable(yarntable), name(0), desc(0), picture(0), list(0)
{}

Node* proj_saveobj::Load_to(set_table *table){
    table->Create_Row({New(picture), New(name), New(desc), New(list)});
    return nullptr;
}

void proj_saveobj::Set(set_table::set_iter iter){
    stack<Node*>* stk = new stack<Node*>(*(*iter).GetPtr()->Get());

    if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
        picture = new QString(*(QString*)(stk->top()->GetVal()));
    }
    stk->pop();
    if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
        name = new QString(*(QString*)(stk->top()->GetVal()));
    }

    stk->pop();
    if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
        desc = new QString(*(QString*)(stk->top()->GetVal()));
    }
    stk->pop();
    if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
        list = new std::list<Node*>(*(std::list<Node*>*)(stk->top()->GetVal()));
    }
}

bool proj_saveobj::operator==(set_table::set_iter iter){
    stack<Node*>* stk = new stack<Node*>(*(*iter).GetPtr()->Get());
    stk->pop();
    if(name != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(QString*)(stk->top()->GetVal())) != " " && (*(QString*)(stk->top()->GetVal()))!= *name){
        delete stk;
        return false;

    }

    stk->pop();
    if(list != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name()){

        std::list<Node*>* st = (std::list<Node*>*)stk->top()->GetVal();
        if(st->size()){
            for(auto iter1 = list->begin(); iter1 != list->end(); iter1++){
                for(auto iter2 = st->begin(); iter2 != st->end(); iter2++){
                    if(Yarn_nodecreator()(*iter1, *iter2)){
                        delete stk;
                        return false;
                    }
                }

            }
        }
        else{
            return false;
        }
    }
    stk->pop();
    delete stk;
    return true;


}

void proj_saveobj::WriteToFile(const char *filepath){
    QFile file(filepath);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    if(name){
        stream << *name;
    }
    else{
        stream << "0";
    }
     stream << QString("╞");
    if(picture){
        stream << *picture;
    }
    else{
        stream <<"0";
    }
    stream <<QString("╞");
    if(desc && *desc != QString()){
        stream << *desc;

    }
    else{
        stream <<"0";
    }
    stream << QString("╞");
    if(list){
        QString s = QString("Yarn_")+QDateTime::currentDateTime().toString("yyyy-MM-dd_hh-mm-ss");
        for(auto i = list->begin(); i != list->end(); i++){
        Yarn_saveobj((*i)->Get()).WriteToFile(s.toStdString().c_str());
        }
        stream << s;
    }
    else{
        stream << "0";
    }
    stream << QString("▓");
    file.close();
}

bool proj_saveobj::LoadFromFile(const char *filepath){
    QFile f(filepath);

    f.open(QIODevice::ReadWrite |QIODevice::Text);
    if(!f.size()){
        f.close();
        return false;
    }
    QTextStream file(&f);
    file.setCodec("UTF-8");
    delete name;
    delete picture;
    delete desc;
    QStringList str = file.readAll().split(9619);
    QStringList str2 = str[0].split(9566);
    if(str2[0]!="0"){

       name = new QString(str2[0]);
    }
    else{
        name = nullptr;
    }
    if(str2[1] != "0"){
        picture = new QString(str2[1]);
    }
    else{
        picture = nullptr;
    }
    if(str2[2] != "0"){
        desc = new QString(str2[2]);
    }
    else{
        desc = nullptr;
    }
    if(str2[3] != "0"){
        QFile lst(str2[3]);
        list = new std::list<Node*>;
        Yarn_saveobj o;
        while(o.LoadFromFile(str2[3].toStdString().c_str())){
            list->push_back(o.Load_to(yarntable));
        }
        lst.remove();
    }
    else{
        list = new std::list<Node*>();
    }
    f.resize(0);
    for(int i = 1; i < str.size()-1; i++){

        file << (str[i].toStdString().c_str());
        file << (QString("▓"));
    }
    f.close();
    return true;
}
