#include "MainMenu.h"
#include "AddNewTab.h"
#include "searchtab.h"
#include "TableService.h"
#include "ListTab.h"
#include <vector>
#include "projecttab.h"

void SaveAll(set_table* tb){
auto beg = tb->GetSORTBYIter();
auto end = tb->GetBackOfSortBy();
for(beg; beg != end; beg++){
  tb->Save(new Yarn_saveobj(beg), "Yarn.sv");
}
}

MainMenu::MainMenu(QWidget *parent)
    : QMainWindow(parent),  ui(new Ui::MainWindow), go_proj_tab(0)
{
    table = new set_table(10, {t_line, t_line, t_line, t_numeric, t_footage, t_line, t_date, t_line, t_line, t_comp}, new Yarn_nodecreator(), 1);
    table->SetSortBy(1);
    table->Load(new Yarn_saveobj(), "YARN.sv");

        ui->setupUi(this);
        this->setWindowFlag(Qt::FramelessWindowHint);
   QPalette pal;
   bg = new QPixmap("D:/Downloads/YarnBG.png");
   logo = new QPixmap("D:/Downloads/homalogo.png");
   *logo = logo->scaled(900, 400, Qt::KeepAspectRatio);
   *bg = bg->scaled(QGuiApplication::screens().at(0)->size(), Qt::KeepAspectRatioByExpanding);
   pal.setBrush(this->backgroundRole(), *bg);
   ui->centralWidget->setPalette(pal);
   widbg = new QPixmap("D:/Downloads/widbg.png");

QSize linesz(QGuiApplication::screens().at(0)->size().width()/2, QGuiApplication::screens().at(0)->size().height());
  ui->menuWidget->setMaximumSize(linesz);
   *widbg = widbg->scaled(ui->menuWidget->maximumSize(), Qt::IgnoreAspectRatio);
  QPalette pal2;

  pal2.setBrush( ui->menuWidget->backgroundRole(), *widbg);
  ui->menuWidget->setPalette(pal2);

ui->verticalLayout->setContentsMargins(300, 0, 300, 0);
   QGraphicsScene* s= new QGraphicsScene;
   s->addPixmap(*logo);

   ui->logo->setScene(s);
   ui->logo->setSceneRect(logo->rect());
    ui->logo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff );
     ui->logo->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff );
        connect(ui->ExitButton, SIGNAL(clicked()), this, SLOT(quit()));
        connect(ui->AddNewButton, SIGNAL(clicked()), this, SLOT(AddNew()));
        connect(ui->ShowAllButton, SIGNAL(clicked()), this, SLOT(ShowList()));
        connect(ui->SearchButton, SIGNAL(clicked()), this, SLOT(Search()));
        connect(ui->ProjectsButton, SIGNAL(clicked()), this, SLOT(ShowProjects()));
}

void MainMenu::AddNew(){
   go_add_new=new AddNewTab(this);
   go_add_new->setWindowFlag(Qt::FramelessWindowHint);
   go_add_new->showMaximized();
   this->hide();
}

void MainMenu::ShowList(){
    go_list_tab=new ListTab(this);
    go_list_tab->setWindowFlag(Qt::FramelessWindowHint);
    go_list_tab->showMaximized();
    this->hide();
}

void MainMenu::ShowSearchList(std::list<Node*>* stk){
   go_list_tab=new ListTab(this);
   go_list_tab->setWindowFlag(Qt::FramelessWindowHint);
   go_list_tab->Show(stk);
   go_list_tab->showMaximized();
   this->hide();
}


void MainMenu::Search(){
    go_srch_tab=new SearchTab(this);
    go_srch_tab->setWindowFlag(Qt::FramelessWindowHint);
    go_srch_tab->showMaximized();
    this->hide();
}

void MainMenu::ShowProjects(){
    if(!go_proj_tab){
    go_proj_tab=new ProjectsTab(this);
    }
    go_proj_tab->Show();
    this->hide();
}

void MainMenu::quit(){
    if(!QMessageBox::question(this, " ", "Вы уверены, что хотите уйти?", "Да", "Нет")){
       SaveAll(table);
       QApplication::quit();
    }
}


MainMenu::~MainMenu()
{

    delete ui;
    delete bg;
    delete widbg;
    delete logo;
    delete go_add_new;
    delete go_list_tab;
    delete go_srch_tab;
    delete go_proj_tab;
}

bool MainMenu::istableempty(){return table->isempty();}
