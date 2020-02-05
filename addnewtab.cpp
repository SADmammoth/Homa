#include "AddNewTab.h"
#include "MainMenu.h"
#include "TableService.h"
#include "Table/color_conversion.h"
AddNewTab::AddNewTab(MainMenu* menu, QWidget* parent): QMainWindow (parent), menu(menu), ui(new Ui::AddTab)
{
    ui->setupUi(this);
    make_deflt();
    if(menu && !menu->table){
    createtable();
    }
     ui->AddButton->hide();
    ui->line1->setValidator(new QIntValidator(0,9999));
    ui->line2->setValidator(new QIntValidator(0,9999));
    connect(ui->line1, SIGNAL(returnPressed()), ui->line2, SLOT(setFocus()));
    ui->open->resize(ui->picturewidget->size());
    QPalette* p = new QPalette;
    QImage pix("D:/Downloads/pictureplaceholder.png");
     picture = new QString("D:/Downloads/pictureplaceholder.png");
   pix = pix.scaled(ui->picturewidget->size());

    p->setBrush(ui->open->backgroundRole(), QBrush(pix));
    ui->open->setPalette(*p);
    ui->dateEdit->setMaximumDate(QDate::currentDate());
    ui->dateEdit->setDate(QDate::currentDate());
    ui->amount->setValidator(new QIntValidator(0, 9999));
    connects();
}

void AddNewTab::open_picture(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "",
            tr("PNG Pictures (*.png);"));

        if (fileName != "") {

            QPalette* p = new QPalette;
            picture = new QString(fileName);
            QImage pix(*picture);
           pix = pix.scaled(ui->picturewidget->size(),Qt::KeepAspectRatioByExpanding);
            p->setBrush(QPalette::Button, QBrush(pix));
            ui->open->setPalette(*p);
            }

}

AddNewTab::AddNewTab(QString* picture, QString* name, QString* manufac, int* amount, Footage* footage,
                     QString* store, QDate* date, QString* desc, QColor* color, multiset<Component>* comp, set_table* table, QWidget* parent):
    ui(new Ui::AddTab), table(table), QMainWindow(parent){
    ui->setupUi(this);
     ui->AddButton->hide();
    ui->header->setText("Изменение элемента");
    ui->dateEdit->setMaximumDate(QDate::currentDate());
    ui->dateEdit->setDate(QDate::currentDate());
      make_deflt();
    if(picture){
        this->picture = new QString(*picture);
        QPalette* p = new QPalette();
         ui->open->resize(ui->picturewidget->size());
        QImage pix(*picture);
       pix = pix.scaled(ui->picturewidget->size(),Qt::KeepAspectRatioByExpanding);
        p->setBrush(QPalette::Button, QBrush(pix));
        ui->open->setPalette(*p);
    }
    if(name){
        this->name = name;
    ui->nameLine->setText(*name);
    }
    if(manufac){
        this->manufac = manufac;
    ui->destribLine->setText(*manufac);
    }
    if(amount && *amount != 0){
        this->amount = amount;
    ui->amount->setText(to_string(*amount).c_str());
    }
    if(footage && (footage->length || footage->weight)){
       this->footage = footage;
    ui->line1->setText(to_string(footage->length).c_str());
     ui->line2->setText(to_string(footage->weight).c_str());
    }
    if(store){
        this->store = store;
    ui->store->setText(*store);
    }
    if(date){
        this->date = date;
        ui->dateEdit->setDate(*date);
    }
    if(color){
        this->rgb =color;
        ui->color->setPalette(*color);
    }
    if(desc){
        this->desc = desc;
        ui->Desc->setPlainText(*desc);
    }
    if(comp){
        this->complist = comp;
        auto lst = comp->begin();
        for(lst; lst != comp->end()--; lst++){
            ui->componentwidget->layout()->addWidget(new component(new Component(*lst), false, false, nullptr));
        }
        if(typeid(*ui->componentwidget->layout()->takeAt(0)->widget()).name() != typeid(component).name()){
            ui->addnewcomp->hide();
        }

    else{
        ui->componentwidget->layout()->takeAt(0)->widget()->show();
    }
    }
    ui->next->hide();
    connects();
}

void AddNewTab::writetoname(){

    if(ui->nameLine->text() == QString()){return;}
    name = new QString(ui->nameLine->text());
}

void AddNewTab::writetomanufac(){
     if(ui->destribLine->text() == QString()){return;}
   manufac = new QString(ui->destribLine->text());
}

void AddNewTab::writetofootage(){
    if(ui->line1->text()== QString()|| ui->line2->text() == QString()){
        return;
    }
   footage = new Footage{ui->line1->text().toInt(), ui->line2->text().toInt()};
}

void AddNewTab::writetostore(){
   if(ui->store->text() == QString()){return;}
   store = new QString(ui->store->text());
}

void AddNewTab::writetodate(){
    date = new QDate(ui->dateEdit->date());
}

void AddNewTab::writetodesc(){
    if(ui->Desc->toPlainText() == QString()){return;}
    desc = new QString(ui->Desc->toPlainText());
}

void AddNewTab::writetoamount(){
    if(ui->amount->text() == QString()){return;}
    amount = new int(ui->amount->text().toInt());
}

void AddNewTab::showadddialog(){
    dialog = new AddComponentWidget();
    dialog->setWindowFlag(Qt::Popup);
    dialog->move(ui->componentwidget->pos());
    dialog->show();
    connect(dialog, SIGNAL(saved()), this, SLOT(add_comp()));

}

void AddNewTab::connects()
{
    connect(ui->open, SIGNAL(clicked()), this, SLOT(open_picture()));

    connect(ui->nameLine, SIGNAL(editingFinished()), this, SLOT(writetoname()));
     connect(ui->destribLine, SIGNAL(editingFinished()), this, SLOT(writetomanufac()));
        connect(ui->line2, SIGNAL(editingFinished()), this, SLOT(writetofootage()));
            connect(ui->store, SIGNAL(editingFinished()), this, SLOT(writetostore()));
                connect(ui->dateEdit, SIGNAL(editingFinished()), this, SLOT(writetodate()));
                    connect(ui->Desc, SIGNAL(textChanged()), this, SLOT(writetodesc()));
                        connect(ui->delete_button, SIGNAL(clicked()), this, SLOT(dlt()));
                           connect(ui->menu, SIGNAL(clicked()), this, SLOT(back()));
                           if(menu){
                            connect(ui->next, SIGNAL(clicked()), this, SLOT(next()));
                        }
                              connect(ui->amount, SIGNAL(editingFinished()), this, SLOT(writetoamount()));
                                connect(ui->addnewcomp, SIGNAL(clicked()), this, SLOT(showadddialog()));
                                    connect(ui->color, SIGNAL(clicked()), this, SLOT(showcolordialog()));
}

void AddNewTab::back(){
    if(!name || !manufac){
       QMessageBox::critical(this, "", "Поля \"Название\" и \"Произвоитель\" обязательны для ввода");
       return;
    }
    if(menu){
        createRow();
        menu->show();
    }
    else{

        emit remove();

        try{
            table->Create_Row({New(picture), New(name),
                               New(manufac), New(amount),
                               New(footage), New(store),
                               New(date), New(desc),
                               New(rgb), New(complist)});

            emit reload();
        }

        catch(RepeatException ex){
            QMessageBox::critical(this, "", "Такое имя уже существует");
            Sleep(5000);
            return;
       }
    }

  delete this;
}

void AddNewTab::createtable(){
    menu->table = new set_table(10, {t_line, t_line, t_line, t_numeric, t_footage, t_line, t_date, t_line, t_color, t_comp}, new Yarn_nodecreator(), 1);
   menu->table->SetSortBy(0);
}

void AddNewTab::dlt(){
    if(menu){
    menu->show();
    }
    delete this;
}

void AddNewTab::next(){
    createRow();
    menu->AddNew();
    delete this;
}

void AddNewTab::createRow(){
    if(!picture || !name){
     QMessageBox::critical(this, " ", "Заполните поля название и производитель. Они обязательны.");
        return;
    }
    try{
    menu->table->Create_Row({New(picture), New(name), New(manufac), New(amount), New(footage), New(store), New(date), New(desc), New(rgb), New(complist)});
    }
    catch(RepeatException ex){
        QMessageBox::critical(this, "", "Имя не должно повторяться");
        return;
    }
}


void AddNewTab::showcolordialog()
{
    QColorDialog cdiag;
    cdiag.resize(cdiag.size().height()*4, cdiag.size().width()*4);
    QColor* clr = new QColor(cdiag.getColor(Qt::white, this, "Цвет пряжи"));
    ui->color->setPalette(*clr);
    rgb = new QColor(*clr);
}
void AddNewTab::add_comp(){

    multiset<Component>* s = dialog->GetComponents();
    while (QLayoutItem* item = ui->componentwidget->layout()->takeAt(2)) {
        delete item->widget();
        delete item;
    }
    if(s){
        ui->addnewcomp->hide();

        complist = new multiset<Component>(*s);
        auto lst = complist->begin();
        for(lst; lst != complist->end()--; lst++){
            ui->componentwidget->layout()->addWidget(new component(new Component(*lst), false, false));
        }
//        if(typeid(*ui->componentwidget->layout()->takeAt(0)->widget()).name() != typeid(component).name()){
        ui->AddButton->show();
        connect(ui->AddButton, SIGNAL(clicked()), this, SLOT(showadddialog()));
//        }
    }
        else{
        ui->AddButton->hide();
            ui->addnewcomp->show();
        }
}

void AddNewTab::make_deflt(){
    name = nullptr; manufac = nullptr;  picture = nullptr; footage = nullptr/*new Footage{0, 0}*/; store = nullptr/*new QString()*/;
    date = nullptr/*new QDate(QDate::currentDate())*/; desc = nullptr;/*new QString()*/; amount = nullptr/*new int(0)*/; rgb = nullptr/*new QString()*/;
             complist = nullptr/*new multiset<Component>*/;
}


AddNewTab::~AddNewTab(){
    delete name;
    delete manufac;
    delete picture;
    delete footage;
    delete store;
    delete date;
    delete desc;
    delete ui;
}



