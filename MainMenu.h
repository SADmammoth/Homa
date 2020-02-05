#pragma once

#include <QMainWindow>
#include <QImage>
#include <QPalette>
#include <QtWidgets>
#include <QBoxLayout>
#include <QLabel>
#include "ui_mainwindow.h"

#include "stack"
using namespace Qt;

namespace Ui {
    class MainWindow;
}

class ListTab;
class AddNewTab;
class SearchTab;
class Node;
class set_table;
class AddPrj;
class ProjectsTab;

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:

    MainMenu(QWidget *parent = 0);
    ~MainMenu();
    bool istableempty();

signals:

   void AddNewPressed();
   void ShowListPressed();
   void SearchPressed();
   void ShowProjectsPressed();

public slots:

   void AddNew();
   void ShowList();
   void ShowSearchList(std::list<Node*>* stk);
   void Search();
   void ShowProjects();
   void quit();

  private:
    set_table* table;
    void delete_pixels(QPixmap*);
    QPixmap* bg;
    QPixmap* widbg;
    QPixmap* logo;
    Ui::MainWindow* ui;
    AddNewTab* go_add_new;
    ListTab* go_list_tab;
    SearchTab* go_srch_tab;
    ProjectsTab* go_proj_tab;

    friend class AddNewTab;
     friend class ListTab;
     friend class SearchTab;
     friend class rangesearch;
     friend class AddPrj;
     friend class ProjectsTab;
     friend class Project;
};

