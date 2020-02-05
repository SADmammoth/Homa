#pragma once

#include <QtWidgets>
#include <stack>

using namespace std;

namespace Ui{
    class Card;
}

class FullCard;
class Node;
class set_table;
class ListTab;
class YarnCard : public QWidget
{
    Q_OBJECT

public:

    YarnCard(QWidget *parent = nullptr);
    YarnCard(set_table* table, stack<Node*>* stk, bool is_to_choose = false, QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent* event);
    ~YarnCard();

public slots:

    void sendReload();

signals:

    void chosen(YarnCard*);
    void reload();

private:

    Ui::Card* ui;
    stack<Node*>* stk;
    FullCard* card;
    set_table* table;
    bool is_to_choose;

    friend FullCard;
    friend ListTab;
};
