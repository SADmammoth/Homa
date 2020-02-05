#ifndef RANGESEARCH_H
#define RANGESEARCH_H

#include <QMainWindow>

class set_table;
class MainMenu;
namespace Ui {
class rangesearch;
}

class rangesearch : public QMainWindow
{
    Q_OBJECT

public:
    explicit rangesearch(MainMenu* table,QWidget *parent = nullptr);
    ~rangesearch();
public slots:
    void choose();
    void find();
    void back();
private:
    Ui::rangesearch *ui;
    MainMenu* menu;
    int col;
};

#endif // RANGESEARCH_H
