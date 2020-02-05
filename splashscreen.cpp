#include "splashscreen.h"
#include "ui_splashscreen.h"
#include <QMovie>

splashscreen::splashscreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::splashscreen)
{
    ui->setupUi(this);
    ui->gif->setMovie(new QMovie("D:/Downloads/splashscreen.gif"));
    ui->gif->movie()->start();
    QString ver;
    ui->ver->setText("Версия:" + ver);
}

splashscreen::~splashscreen()
{
    delete ui;
}
