#ifndef PROJECT_H
#define PROJECT_H

#include <QWidget>
#include <list>

namespace Ui {
class Project;
}

class Node;
class set_table;
class MainMenu;
class Project : public QWidget
{
    Q_OBJECT

public:
    explicit Project(MainMenu* menu, Node*, QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent* event);
    ~Project();
signals:
    void change();
private:
    void Pick();
    Node* node;
    Ui::Project *ui;
    QString* name;
    QString* desc;
    QString* image_path;
    std::list<Node*>* yarn;
    MainMenu* menu;
};

#endif // PROJECT_H
