#include "MainMenu.h"
#include <QApplication>
#include "Table/Exceptions.h"
#include "splashscreen.h"

int main(int argc, char *argv[])
{

        QApplication a(argc, argv);
        try{
        MainMenu* w = new MainMenu;
        w->showMaximized();
        }
        catch(Exception awa){
            qDebug()<<awa.what();
        }

        return a.exec();


}

