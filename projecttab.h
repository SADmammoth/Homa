    #ifndef PROJECTTAB_H
    #define PROJECTTAB_H

    #include <QMainWindow>
    #include "Table/SET-TABLE.h"
    #include <list>

    namespace Ui {
    class ProjectTab;
    }

    class MainMenu;
    class set_table;
    class ProjectsTab : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit ProjectsTab(MainMenu* menu, QWidget *parent = nullptr);
        void Show();
        ~ProjectsTab();
    private slots:
        void add();
        void back();
    private:
        Ui::ProjectTab *ui;
        MainMenu* menu;
        set_table* prj_table;
        friend class AddPrj;
        friend class Project;
    };

    class proj_saveobj: public SaveObj{
    private:
        QString* name;
        QString* desc;
        QString* picture;
        std::list<Node*>* list;
        set_table* yarntable;
    public:
        proj_saveobj(set_table* yarntable, QString* name, QString* desc = 0, QString* picture = 0, std::list<Node*>* list = 0);
        proj_saveobj(set_table* yarntable, set_table::set_iter iter);
        proj_saveobj(set_table* yarntable);
        Node* Load_to(set_table* table);

        void Set(set_table::set_iter iter);

        bool operator==(set_table::set_iter iter);

        void WriteToFile(const char* filepath);

        bool LoadFromFile(const char* filepath);
        std::list<Node*>* SmartSearch(set_table*){
            throw(Exception("SmartSearch on the projects in not avaliable now", "proj_saveobj::SmartSearch()"));
        }

    };


    #endif // PROJECTTAB_H
