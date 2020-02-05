#include "yarncard.h"
#include "TableService.h"
#include "ui_yarncard.h"
#include "fullcard.h"

YarnCard::YarnCard(set_table* table, stack<Node*>* stk, bool is_to_choose, QWidget *parent) :
    QWidget(parent), ui(new Ui::Card), table(table), is_to_choose(is_to_choose)
{
    ui->setupUi(this);
    if(!stk){
     exit(90);
    }
    this->stk = new stack<Node*>(*stk);
    qDebug()<<"ssasaa"<<*(QString*)this->stk->top()->GetVal();
    if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){

    ui->picture->setPixmap(*(QString*)this->stk->top()->GetVal());

    }

     this->stk->pop();
      if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){
    ui->name->setText(*(QString*)this->stk->top()->GetVal());
      }
    this->stk->pop();
      qDebug()<<"sss"<<*(QString*)this->stk->top()->GetVal();
      if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){
    ui->manufac->setText(*(QString*)this->stk->top()->GetVal());
      }
    this->stk->pop();

    if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){
        int val = *(int*)this->stk->top()->GetVal();
        if(!val){
            ui->amount->setText("пусто");
        }
        else{
            ui->amount->setText(to_string(val).c_str());
        }
    }
    this->stk->pop();
        if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){
        Footage* fo = (Footage*)this->stk->top()->GetVal();
        if(!fo->length || !fo->length){
           ui->footage->setText(QString("пусто"));
        }
        else{
        QString foot;
        foot.setNum(fo->length);
        foot += '/';
        foot += to_string(fo->weight).c_str();
        ui->footage->setText(foot);
          }
        }
    this->stk->pop();
    this->stk->pop();
    this->stk->pop();
    this->stk->pop();

    if(typeid(*this->stk->top()).name() != typeid(EMPTY).name()){
    ui->color->setPalette(QPalette(QPalette::WindowText, *(QColor*)this->stk->top()->GetVal()));
    }
    else{
       ui->color->setPalette(QPalette(QPalette::WindowText, QColor(255, 255, 255)));
    }
    this->stk = new stack<Node*>(*stk);
}

void YarnCard::mousePressEvent(QMouseEvent *event)
{
    if(event->button() ==  Qt::LeftButton){
        if(is_to_choose){
           this->setPalette(QColor(194, 194, 194));
            emit chosen(this);
        }
        else{
            card = new FullCard(this);
            card->setWindowFlag(Qt::FramelessWindowHint);
            card->show();
            connect(card, SIGNAL(reload()), this, SLOT(sendReload()));
        }

    }
    else{
        QWidget::mousePressEvent(event);
    }
}

void YarnCard::sendReload(){
    emit reload();
}

YarnCard::YarnCard(QWidget *parent) : QWidget(parent), ui(new Ui::Card)
{
    ui->setupUi(this);
    ui->picture->setPixmap(QPixmap("D:/Downloads/pictureplaceholder.png"));
    ui->name->setText("new QTextDocument()");
    ui->manufac->setText("*(QString*)stk->top()->GetVal()");
    Footage* fo = new Footage{9, 20};
    QString foot;
    foot.setNum(fo->length);
    foot += '/';
    foot += to_string(fo->weight).c_str();
    ui->footage->setText(foot);
}

YarnCard::~YarnCard(){
    delete ui;
}
