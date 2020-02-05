#pragma once
#include <QDialog>
#include <QtWidgets>
#include "component.h"
#include <list>
#include <set>
using namespace std;

namespace Ui {
class AddComponentWidget;
}

class AddComponentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddComponentWidget(bool is_for_search = false, QWidget *parent = nullptr);
    ~AddComponentWidget();
      multiset<Component>* GetComponents();
   void SetComponentNames(initializer_list<QString> list);
private slots:
   void add_new();
   void close();
   void save();
signals:
    void saved();
private:
    Ui::AddComponentWidget *ui;
    list<QString>* component_names;
    list<Component>* complist;
    bool is_for_search;
    friend class component;
};

