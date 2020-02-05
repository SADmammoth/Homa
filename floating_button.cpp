#include "floating_button.h"
#include "ui_floating_button.h"
#include "stdio.h"

floating_button::floating_button(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::floating_button)
{
    ui->setupUi(this);
//    QPalette pal;
//    pal.setBrush(ui->mainbutton->backgroundRole(), QPixmap("D:/Downloads/sort_butt.png"));
//    ui->mainbutton->setPalette(pal);

//    connect(ui->mainbutton, SIGNAL(clicked()), this, SLOT(show_dialog()));

    connect(ui->name, SIGNAL(clicked()), this, SLOT(name()));
    connect(ui->manuf, SIGNAL(clicked()), this, SLOT(manuf()));
    connect(ui->date, SIGNAL(clicked()), this, SLOT(date()));
    connect(ui->count, SIGNAL(clicked()), this, SLOT(count()));
}

void floating_button::show_dialog(){
    ui->widget->show();
    connect(ui->name, SIGNAL(clicked()), this, SLOT(name()));
    connect(ui->manuf, SIGNAL(clicked()), this, SLOT(manuf()));
    connect(ui->date, SIGNAL(clicked()), this, SLOT(date()));
    connect(ui->count, SIGNAL(clicked()), this, SLOT(count()));
}

void floating_button::name(){
    emit byname();
    this->hide();
}

void floating_button::manuf(){
    emit bymanuf();
    this->hide();
}

void floating_button::date(){
    emit bydate();  
    this->hide();
}

void floating_button::count(){
    emit bycount();
    this->hide();
}

floating_button::~floating_button()
{
    delete ui;
}
