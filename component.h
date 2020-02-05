#pragma once
#include <QWidget>
#include <list>

class Component;
namespace Ui {
class component;
}

class AddComponentWidget;

class component : public QWidget
{
    Q_OBJECT

public:
    component(QWidget *parent = nullptr);
    component(Component* comp, bool is_value_editable = false, bool is_name_editable = false,
              std::list<Component>* lst = nullptr, bool is_val_needed = true, QWidget *parent = nullptr);
    ~component();
    void isEditable(bool& is_editable_value, bool& is_editable_name);
public slots:
   void seteditable(bool value, bool name = false);
   void save_val();
   void save_name();
   void choose();
private:
    Ui::component *ui;
    AddComponentWidget* addcomp;
    Component* comp;
    std::list<Component>* lst;
    bool is_editable_name;
    bool is_editable_val;
    bool is_val_needed;
};

typedef std::vector<Component*> NodeComponents;

