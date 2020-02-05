#include "color_dialog.h"
#include "ui_color_dialog.h"

color_dialog::color_dialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::color_dialog)
{
    ui->setupUi(this);
    connect(ui->yellow, SIGNAL(clicked()), this, SLOT(yellow()));
    connect(ui->red, SIGNAL(clicked()), this, SLOT(red()));
    connect(ui->blue, SIGNAL(clicked()), this, SLOT(blue()));
    connect(ui->green, SIGNAL(clicked()), this, SLOT(green()));
    connect(ui->black, SIGNAL(clicked()), this, SLOT(black()));
}

QColor& color_dialog::getColor(){
    return *color;
}

color_dialog::~color_dialog()
{
    delete ui;
}

void color_dialog::yellow()
{
    color = new QColor(225, 225, 0, 255);
    emit chosen();
}

void color_dialog::blue()
{
    color = new QColor(0, 0, 225, 255);
    emit chosen();
}

void color_dialog::red()
{
    color = new QColor(255, 0, 0, 255);
    emit chosen();
}

void color_dialog::green()
{
    color = new QColor(0, 255, 0, 255);
    emit chosen();
}

void color_dialog::black()
{
    color = new QColor(0, 0, 0, 255);
    emit chosen();
}
