#pragma once

#include <QtWidgets>
#include <set>
namespace Ui {
class Card;
}

class YarnCard;
class Footage;
class Component;

class FullCard : public QMainWindow
{
    Q_OBJECT

public:
    FullCard(YarnCard* card, QWidget *parent = nullptr);
    ~FullCard();
public slots:
    void change();
    void back();
    void del();
    void rel();
signals:
    void reload();
private:
    QString* name;
    QString* manufac;
    QString* picture;
    QString*store;
    QString* desc;
    QColor* color;
    QDate* date;
    int* amount;
    Footage* footage;

    std::multiset<Component>* comp;
    Ui::Card *ui;
    YarnCard* card;
};

