#pragma once

#include <QMainWindow>
#include "MainMenu.h"
#include <set>

struct Footage;
namespace Ui {
class SearchTab;
}
class color_dialog;
class AddComponentWidget;
class Component;
class SearchTab : public QMainWindow
{
    Q_OBJECT

public:
    explicit SearchTab(MainMenu* menu, QWidget *parent = nullptr);
    ~SearchTab();
public slots:
   void setname();
   void setmanufac();
   void setamount();
   void setfootage();
   void comp_dialog();
   void add_comp();
   void color_dialog();
   void Find();
   void Range();
   void goback();
   void save_clr();
private:
    Ui::SearchTab *ui;
    MainMenu* menu;
    QString* name;
    QString* manufac;
    int* amount;
    Footage* footage;
    QColor* color;
    std::multiset<Component>* cmpnts;
    AddComponentWidget* dialog;
    class color_dialog* dialg;
};
