#pragma once

#include <QMainWindow>
#include <QImage>
#include <QPalette>
#include <QtWidgets>
#include <QBoxLayout>
#include <QLabel>
#include <list>
#include <stack>
#include "ui_lsttab.h"
namespace Ui {
    class LstTab;
}

class MainMenu;
class Node;
using namespace Qt;
using namespace std;

class YarnCard;
class ListTab: public QMainWindow
{
    Q_OBJECT
public:

ListTab(MainMenu* menu, bool list_to_choose = false, QWidget *parent = 0);
~ListTab();
 list<Node*>* getChosen();

public slots:
    void Show();
    void Show(list<Node*>* vec);
    void setname();
    void setmanuf();
    void setdate();
    void setcount();
    void back();
    void sort();
    void search();
    void add(YarnCard*);
    void save();
private slots:
    void on_back_clicked();
signals:
    void saved();
private:
    Ui::LstTab* ui;
    MainMenu* menu;
    stack<Node*>* stk;
    list<Node*>* chosen;
    bool list_to_choose;
};
