#include "component.h"
#include "ui_component.h"
#include "TableService.h"
#include "addcomponentwidget.h"

component::component(Component* comp, bool is_value_editable, bool is_name_editable, list<Component>* lst, bool is_val_needed, QWidget *parent) :
    QWidget(parent), ui(new Ui::component), lst(lst), is_editable_val(is_value_editable), is_editable_name(is_name_editable),
    is_val_needed(is_val_needed)
{
    ui->setupUi(this);
    if(!comp){
      this->comp = new Component(nullptr, 0);
        is_name_editable = true;
        is_value_editable = true;
    }
    else{
    this->comp = comp;
    }
    if(!this->comp->name){
        is_name_editable = true;

    }

    ui->name->setText(*this->comp->name);
    if(!this->comp->percentage){
        is_value_editable = true;
    }
    else{
          ui->name->setText(*this->comp->name);
    }
    if(is_val_needed){
    ui->choose->hide();
    ui->value->setValidator(new QIntValidator(0, 100));
    if(is_value_editable){
            ui->value->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
            connect(ui->value, SIGNAL(editingFinished()), this, SLOT(save_val()));
    }
    else{
        ui->value->setText(to_string(this->comp->percentage).c_str());
        ui->value->setReadOnly(true);
        ui->value->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
    }
    if(is_name_editable){
            ui->name->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
            connect(ui->name, SIGNAL(editingFinished()), this, SLOT(save_name()));
    }
    else{
        ui->name->setReadOnly(true);
        ui->name->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
    }
}
else{

    if(is_name_editable){
            ui->name->setCursor(QCursor(Qt::CursorShape::IBeamCursor));

    }
    else{
        ui->name->setReadOnly(true);
         ui->name->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
    }
      ui->value->hide();
    if(!is_value_editable){
        ui->choose->hide();
         ui->name->resize(ui->name->width(), 2*ui->name->height());
    }

}
     connect(ui->choose, SIGNAL(clicked()), this, SLOT(choose()));
}
void component::choose(){

        if(is_editable_name){
            save_name();
        }
        ui->value->setText(to_string(1).c_str());
        ui->name->setPalette(QColor(87, 87, 87));
        save_val();
        ui->choose->hide();
}

component::component(QWidget* parent):QWidget(parent), ui(new Ui::component), comp(0),
    is_editable_val(false), is_editable_name(false){
}

component::~component()
{
    delete ui;
}

void component::isEditable(bool& value, bool& name){
    value = is_editable_val;
    name = is_editable_name;
}

void component::save_val(){
   if(ui->name->text()== "" || ui->name->text() == " "){
        QMessageBox::critical(qApp->desktop(), "", "Сначала заполните название!");
        is_editable_name = true;
        ui->name->setReadOnly(false);
        ui->name->setFocus();
        return;
    }
    if(ui->value->text() != "0")
    comp->percentage = ui->value->text().toInt();
    if(lst){
    lst->push_back(Component(*comp));
    }
}

void component::save_name(){
    if(ui->name->text()!= "" || ui->name->text() != " ")
    comp->name = new QString(ui->name->text());
}

void component::seteditable(bool value, bool name){
    if(value != is_editable_val){
    is_editable_val = value;
    if(value){
            ui->value->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
            connect(ui->value, SIGNAL(editingFinished()), this, SLOT(save_val()));
    }
    else{
        ui->value->setReadOnly(true);
        ui->value->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
    }
    }
    if(name != is_editable_name){
    if(name){
            ui->name->setCursor(QCursor(Qt::CursorShape::IBeamCursor));
            connect(ui->name, SIGNAL(editingFinished()), this, SLOT(save_name()));
    }
    else{
        ui->name->setReadOnly(true);
        ui->name->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
    }
    }
}
