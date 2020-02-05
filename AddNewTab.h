#pragma once

#include <QImage>
#include <QPalette>
#include <QtWidgets>
#include <QBoxLayout>
#include <QLabel>
#include "ui_addnewtab.h"
#include "addcomponentwidget.h"
#include <list>

namespace Ui {
    class AddTab;
}

class MainMenu;
class set_table;
struct Footage;

class AddNewTab: public QMainWindow
{
    Q_OBJECT

private slots:

    void open_picture();
    void writetoname();
    void writetomanufac();
    void writetofootage();
    void writetostore();
    void writetodate();
    void writetodesc();
    void writetoamount();
    void add_comp();
    void createRow();
    void showcolordialog();
    void showadddialog();
    public:
        AddNewTab(MainMenu* menu, QWidget* parent = 0);
        AddNewTab(QString* picture, QString* name, QString* manufac, int* amount, Footage* footage,
                  QString* store, QDate* date, QString* desc, QColor* color, multiset<Component>* comp, set_table* table, QWidget* parent = 0);
         ~AddNewTab();
    public slots:
          void back();
          void next();
          void dlt();
    signals:
        void remove();
        void reload();
    private:
        void connects();
        void createtable();
        void make_deflt();
        Ui::AddTab* ui;
        QString* name;
        QString* manufac;
        QString* picture;
        Footage* footage;
        QString* store;
        QDate* date;
        QString* desc;
        int* amount;
        QColor* rgb;
        multiset<Component>* complist;
        AddComponentWidget* dialog;
        MainMenu* menu;
        set_table* table;
};
