#ifndef ADDPRJ_H
#define ADDPRJ_H

#include <QMainWindow>
#include <list>

namespace Ui {
class AddPrj;
}

class ListTab;
class MainMenu;
class Node;
class AddPrj : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddPrj(MainMenu* menu, QString* name = 0, QString* desc = 0, QString* image_path = 0, std::list<Node*>* lst = 0, QWidget *parent = nullptr);
    ~AddPrj();
private slots:
    void file_dialog();
    void back();
    void dlte();
    void save_name();
    void save_desc();
    void showyarn();
    void add();
signals:
    void changed();
private:
    Ui::AddPrj *ui;

    QString* name;
    QString* picture;
    QString* desc;
    std::list<Node*>* lst;
    MainMenu* menu;
    ListTab* lsttab;
};

#endif // ADDPRJ_H
