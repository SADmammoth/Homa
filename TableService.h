#ifndef TABLESERVICE_H
#define TABLESERVICE_H

#include <QtWidgets>
#include "Table/SET-TABLE.h"
#include <fstream>

#define t_numeric 1
#define t_line 2
#define t_text 3
#define t_footage 4
#define t_bool 5
#define t_date 6
#define t_comp 7
#define t_list 8
#define t_color 9

struct Component{
    QString* name;
    int percentage;
    Component(QString name, int percent = 0):name(new QString(name)), percentage(percent){}
    Component():name(0), percentage(0){}

    bool operator==(const Component other)const{
        return *this->name == *other.name && this->percentage == other.percentage;
    }
    bool operator<(const Component other)const{
        return this->percentage < other.percentage;
    }

    bool operator!=(const Component other)const{
        return !(*this==other);
    }
    bool isNameEquals(const Component other)const{
        return *this->name == *other.name;
    }

};


struct Footage{
    int length;
    int weight;
    bool operator<(const Footage& other){
        if(!this->weight || !other.weight){
           return this->weight < other.weight;
        }
        return (double)(length/weight) < (double)(other.length/other.weight);
    }
    bool operator==(const Footage& other){
        if(!this->weight || !other.weight){
           return this->weight < other.weight;
        }
        return (double)(length/weight) == (double)(other.length/other.weight);
    }
    bool operator!=(const Footage& other){
        return !(*this == other);
    }
};


void deflt(QString* pntr);
void deflt(Footage* pntr);
void deflt(QDate* pntr);
void deflt(int* pntr);

template <typename T>
Node* New(T* val){
    if(val == nullptr){
        return new EMPTY;
    }
    Node* nd = new TNode<T>(*val);
    return nd;
}

typedef TNode<int> NodeNumeric;

typedef TNode<QString> NodeLine;

typedef TNode<QTextDocument*> NodeText;

typedef TNode<Footage> NodeFootage;

typedef TNode<bool> NodeLogical;

typedef TNode<QDate> NodeDate;

typedef TNode<multiset<Component>> NodeComponent;

typedef TNode<list<Node*>> NodeList;

typedef TNode<QColor> NodeColor;



class Yarn_nodecreator: public NodeCreator_n_comparator{
public:
    static QColor *toColor(QString *str){
        QColor* clr = new QColor();
        int rgb = (str)->toInt();
        int b = rgb % 1000;
        rgb = rgb/1000;
        int g = rgb % 1000;
        int r = rgb/1000;
        clr->setRgb(r, g, b);
        return clr;
    }

    static QString *toString(QColor *clr){
        int r = clr->red();
        int g = clr->green();
        int b = clr->blue();
        QString* str = new QString();
        if(r<10){
            *str = "00";
        }
        else{
            if(r<100){
                *str = "0";
            }
        }
        *str += std::to_string(r).c_str();
        if(g<10){
            *str += "00";
        }
        else{
            if(g<100){
                *str += "0";
            }
        }
        *str += std::to_string(g).c_str();
        if(b<10){
            *str += "00";
        }
        else{
            if(b<100){
                *str += "0";
            }
        }
        *str += std::to_string(b).c_str();
        return str;
    }

    Node* Create_Node_of_type(int id)override{
        switch (id){
            case (1) : { return new NodeNumeric;}
            case (2) : { return new NodeLine;}
            case (3) : { return new NodeText;}
            case (4) : { return new NodeFootage;}
            case (5) : { return new NodeLogical;}
            case (6) : { return new NodeDate;}
            case (7) : { return new NodeComponent;}
            case (8) : {return new NodeList;}
            case (9) : {return new NodeColor;}
        default: {throw BadArgument("Explicit type id", "Searcher::Create_Node_of_type", id);}
        }
    }

 bool operator()(const nodeptr& that, const nodeptr& other)const override{

     if(typeid (*that.GetPtr()).name() == typeid(TNode<QColor>).name()){
         return (reinterpret_cast<QColor*>(that.GetPtr()->GetVal())->hsvHue() < reinterpret_cast<QColor*>(other.GetPtr()->GetVal())->hsvHue());
     }


     if(typeid (*that.GetPtr()).name() == typeid(TNode<list<Node*>>).name()){
         return (reinterpret_cast<list<Node*>*>(that.GetPtr()->GetVal())->size() < reinterpret_cast<list<Node*>*>(other.GetPtr()->GetVal())->size());
     }

     if (typeid (*that.GetPtr()).name() == typeid(TNode<multiset<Component>>).name()){

             return (reinterpret_cast<set<Component>*>(that.GetPtr()->GetVal())->size() < reinterpret_cast<set<Component>*>(other.GetPtr()->GetVal())->size());
         }


     if (typeid (*that.GetPtr()).name() == typeid(TNode<string>).name()){

             return (*reinterpret_cast<string*>(that.GetPtr()->GetVal()) < *reinterpret_cast<string*>(other.GetPtr()->GetVal()));
         }

         if (typeid (*that.GetPtr()).name() == typeid(TNode<Footage>).name()){

             return (*reinterpret_cast<Footage*>(that.GetPtr()->GetVal()) < *reinterpret_cast<Footage*>(other.GetPtr()->GetVal()));
         }
         if (typeid (*that.GetPtr()).name() == typeid(TNode<QString>).name()){
             qDebug()<<*((QString*)that.GetPtr()->GetVal());
             return (*(reinterpret_cast<QString*>(that.GetPtr()->GetVal())) < *((reinterpret_cast<QString*>(other.GetPtr()->GetVal()))));
         }

         if (typeid (*that.GetPtr()).name() == typeid(TNode<QDate>).name()){
             return (*reinterpret_cast<QDate*>(that.GetPtr()->GetVal()) < *reinterpret_cast<QDate*>(other.GetPtr()->GetVal()));
         }
         if (typeid (*that.GetPtr()).name() == typeid(TNode<int>).name()){

             return (*reinterpret_cast<int*>(that.GetPtr()->GetVal()) < *reinterpret_cast<int*>(other.GetPtr()->GetVal()));
         }
         if (typeid (*that.GetPtr()).name() == typeid(TNode<QTextDocument*>).name()){

             return (reinterpret_cast<QTextDocument*>(that.GetPtr()->GetVal()) < reinterpret_cast<QTextDocument*>(other.GetPtr()->GetVal()));
         }
         if (typeid (*that.GetPtr()).name() == typeid(TNode<double>).name()){

             return (*reinterpret_cast<double*>(that.GetPtr()->GetVal()) < *reinterpret_cast<double*>(other.GetPtr()->GetVal()));
         }
         if (typeid (*that.GetPtr()).name() == typeid(EMPTY).name() && typeid (*other.GetPtr()).name() != typeid(EMPTY).name()){

             return false;
         }
         if (typeid (*other.GetPtr()).name() == typeid(EMPTY).name() && typeid (*that.GetPtr()).name() != typeid(EMPTY).name()){

             return true;
         }
         if (typeid (*other.GetPtr()).name() == typeid(EMPTY).name() && typeid (*that.GetPtr()).name() == typeid(EMPTY).name()){
            return false;
         }
         if(typeid (*that.GetPtr()).name() != typeid (*other.GetPtr()).name()){
               throw( UnexpectedType("node_ptr::operator<", typeid(other.GetPtr()).name()));
         }
        throw( UnexpectedType("node_ptr::operator<", typeid(*that.GetPtr()).name()));
    }



    };

class Yarn_saveobj: public SaveObj{
private:
    QString* name;
    QString* manufac;
    QString* picture;
    Footage* footage;
    QString* store;
    QDate* date;
    QString* desc;
    int* amount;
    QColor* color;
    multiset<Component>* complist;
public:
    Yarn_saveobj(QString* name, QString* manufac = 0, QString* picture = 0, Footage* footage = 0, QString* store = 0,
                 QDate* date = 0, QString* desc = 0, int* amount = 0, QColor* color = 0, multiset<Component>* complist = 0){
        if(name){
            this->name = new QString(*name);
        }
        else{
            this->name = nullptr;
        }

        if(manufac){
            this->manufac = new  QString(*manufac);
        }
        else{
            this->manufac = nullptr;
        }

        if(picture){
            this->picture = new  QString(*picture);
        } else{
            this->picture = nullptr;
        }

        if(footage){
            this->footage = new Footage(*footage);
        }
        else{
            this->footage = nullptr;
        }

        if(store){
            this->store = new QString(*store);
        }
        else{
                    this->store = nullptr;
                }

        if(date){
            this->date = new QDate(*date);
        }
        else{
                    this->date = nullptr;
                }

        if(desc){
            this->desc = new QString(*desc);
        }
        else{
                    this->desc = nullptr;
                }
        if(amount){
            this->amount = new int(*amount);
        }
        else{
                    this->amount = nullptr;
                }

        if(color){
            this->color = new QColor(*color);
        }
        else{
                    this->color = nullptr;
                }

        if(complist){
            this->complist = new  multiset<Component>(*complist);
        }
        else{
                    this->complist = nullptr;
                }
    }
    Yarn_saveobj(set_table::set_iter iter):name(0), manufac(0), picture(0), footage(0), store(0), date(0), desc(0), amount(0), color(0), complist(0){ Set(iter);}
    Yarn_saveobj(stack<Node*>* stk):name(0), manufac(0), picture(0), footage(0), store(0), date(0), desc(0), amount(0), color(0), complist(0){ Set(stk);}
    Yarn_saveobj():name(0), manufac(0), picture(0), footage(0), store(0), date(0), desc(0), amount(0), color(0), complist(0){}
    Node* Load_to(set_table* table){
        qDebug()<<"Loadto";
        if(table && table->Rows()){
            list<Node*>* list = SmartSearch(table);
            if(list != 0){
                return *list->begin();
            }
        }

          table->Create_Row({New(picture), New(name), New(manufac), New(amount), New(footage),
                             New(store), New(date), New(desc), New(color), New(complist)});
          return *SmartSearch(table)->begin();
    }
    void Set(stack<Node*>* s){
        stack<Node*>* stk = s;

        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             picture = new QString(*(QString*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             name = new QString(*(QString*)(stk->top()->GetVal()));
        }

        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             manufac = new QString(*(QString*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             amount = new int(*(int*)(stk->top()->GetVal()));
        }

        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             footage = new Footage(*(Footage*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             store = new QString(*(QString*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             date = new QDate(*(QDate*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             desc = new QString(*(QString*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             color = new QColor(*(QColor*)(stk->top()->GetVal()));
        }
        stk->pop();
        if(typeid(*stk->top()).name() != typeid(EMPTY).name()){
             complist = new multiset<Component>(*(multiset<Component>*)(stk->top()->GetVal()));
        }
    }
    void Set(set_table::set_iter iter){
        stack<Node*>* s = new stack<Node*>(*(*iter).GetPtr()->Get());
        Set(s);
    }

    bool operator==(set_table::set_iter iter){
       stack<Node*>* stk = new stack<Node*>(*(*iter).GetPtr()->Get());
       stk->pop();
       if(name != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(QString*)(stk->top()->GetVal())) != " " && (*(QString*)(stk->top()->GetVal()))!= *name){
            delete stk;
            return false;

       }

       stk->pop();
       if(manufac != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(QString*)(stk->top()->GetVal())) != " " && (*(QString*)(stk->top()->GetVal()))!= *manufac){
           delete stk;
            return false;
       }

       stk->pop();
       if(amount != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(int*)(stk->top()->GetVal())) != 0 && (*(int*)(stk->top()->GetVal()))!= *amount){
           delete stk;
            return false;
       }

       stk->pop();
       if(footage != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() &&
               (((Footage*)(stk->top()->GetVal()))->length != footage->length
        || ((Footage*)(stk->top()->GetVal()))->weight != footage->weight)){
           delete stk;
            return false;
       }
       stk->pop();
       if(store != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(QString*)(stk->top()->GetVal()))!= *store){
           delete stk;
            return false;
       }
       stk->pop();
       if(date != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && (*(QDate*)(stk->top()->GetVal()))!= *date){
           delete stk;
            return false;
       }
       stk->pop();
       stk->pop();
       if(color != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name()){
          QColor* clr = (QColor*)stk->top()->GetVal();
          if(*color != *clr){

           int hue = clr->hue();
              if(*color == QColor(255, 0, 0, 255)){
                  if(!(hue<=50 || hue>=290)){
                       return false;
                  }
              }
              else if(*color == QColor(0, 0, 255, 255)){
                if(!(hue<=290 && hue >= 170)){
                    return false;
                }
              }
              else if(*color == QColor(0, 255, 0, 255)){
                  if(!(hue<=170 && hue>= 70)){
                    return false;
                  }
              }
              else if(*color == QColor(255, 255, 0, 255)){
                  if(!(hue<=70 && hue>=40)){
                      return false;
                  }

              }
              else if(color->hue() == -1){
                  if(!(hue == -1)){
                      return false;
                  }
              }
              else{
                  return false;
              }
          }
       }
       stk->pop();
       if(complist != nullptr && typeid(*stk->top()).name() != typeid(EMPTY).name() && *complist != multiset<Component>()){

           multiset<Component>* st = (multiset<Component>*)stk->top()->GetVal();
           if(st->size()){
           for(auto iter1 = complist->begin(); iter1 != complist->end(); iter1++){
               for(auto iter2 = st->begin(); iter2 != st->end(); iter2++){
                   if(!iter1->isNameEquals(*iter2)){
                       delete stk;
                       return false;
                   }
               }
            }
           }
           else{
               return false;
           }
       }
       stk->pop();
       delete stk;
       return true;


    }

    void WriteToFile(const char* filepath){
       QFile file(filepath);
        file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append);
        QTextStream stream(&file);
        stream.setCodec("UTF-8");
        if(name){
             stream << *name;
        }
        else{
            stream << "0";
        }
        stream << QString("╞");
        if(manufac){
        stream <<*manufac;

        }
        else{
            stream <<"0";
        }
         stream << QString("╞");

        if(picture){
        stream <<*picture;

        }
        else{
            stream <<"0";
        }
         stream << QString("╞");
        if(footage){
        stream << footage->length;
        stream << QString("╞");
        stream <<footage->weight;
        }
        else{
            stream <<"0";
            stream << QString("╞");
            stream <<"0";
        }
        stream << QString("╞");
        if(amount){
         stream <<*amount;

        }
        else{
             stream <<"0";
        }
         stream << QString("╞");
        if(store && *store != QString()){
         stream << *store;
        }
        else{
             stream <<"0";
        }
        stream << QString("╞");
        if(desc && *desc != QString()){
         stream << *desc;

        }
        else{
             stream <<"0";
        }
         stream << QString("╞");
        if(date){
         stream <<date->toJulianDay();
        }
        else{
            stream <<"0";
        }
       stream << QString("╞");
        if(color){
             stream << *Yarn_nodecreator::toString(color);
        }
        else{
             stream <<"0";
        }
        stream << QString("╞");
        if(complist && complist->size()){
        for(auto iter = complist->begin(); iter != complist->end(); iter++){
            stream << *iter->name;
            stream << " ";
            stream << iter->percentage;
        }
        }
        else{
            stream <<"0";
        }
        stream << QString("▓");
    }

    bool LoadFromFile(const char* filepath){
        QFile f(filepath);

        f.open(QIODevice::ReadWrite |QIODevice::Text);
        if(!f.size()){
            f.close();
            return false;
        }
        QTextStream file(&f);
        file.setCodec("UTF-8");
        delete name;
        delete manufac;
        delete picture;
        delete footage;
        delete amount;
        delete store;
        delete desc;
        delete date;
        QStringList str = file.readAll().split(9619);
        QStringList str2 = str[0].split(9566);
        if(str2[0]!="0"){

           name = new QString(str2[0]);
        }
        else{
            name = nullptr;
        }
        if(str2[1] != "0"){
            manufac = new QString(str2[1]);
        }
        else{
            manufac = nullptr;
        }

        if(str2[2] != "0"){
            picture = new QString(str2[2]);
        }
        else{
            picture = nullptr;
        }
        if(str2[3] != "0" && str2[4] != "0"){
            footage = new Footage{str2[3].toInt(), str2[4].toInt()};
        }
        else{
            footage = nullptr;
        }
        if(str2[5] != "0"){
            amount = new int(str2[5].toInt());
        }
        else{
            amount = nullptr;
        }
        if(str2[6] != "0"){
            store = new QString(str2[6]);
        }
        else{
            store = nullptr;
        }
        if(str2[7] != "0"){
            desc = new QString(str2[7]);
        }
        else{
            desc = nullptr;
        }
        if(str2[8] != "0"){
            date = new QDate(QDate().fromJulianDay(str2[8].toInt()));
        }
        else{
            date = nullptr;
        }
        if(str2[9] != "0"){
            color = new QColor(*Yarn_nodecreator::toColor(new QString(str2[9])));
            qDebug()<<color->hue();
        }
        qDebug()<<str2[10];
        if(str2[10] != "0"){
                QString s;
                int num;
                QStringList strlist = str2[10].split(' ');
                complist = new multiset<Component>;
                    for(int i = 0; i < strlist.size(); i++){

                        s = strlist[i];
                        i++;
                        num = strlist[i].toInt();
                        complist->insert(Component(s, num));
                    }
        }
        else{
           complist = nullptr;
        }

       f.resize(0);

       for(int i = 1; i < str.size()-1; i++){

           file<<str[i];
           file<< QString("▓");
       }
        f.close();
        return true;
    }

    void AddAll(set_table::set_iter one, set_table::set_iter two, list<Node*>* lst, set_table* table){

        for(one; one !=two; one++){
            lst->push_back(table->GetUniqueElement(one->GetPtr()));
        }

    }

    void EraseExtra(list<Node*>* lst, pair<set_table::set_iter, set_table::set_iter>* pair, set_table* table){
        for(auto beg = lst->begin(); beg != lst->end(); beg++){
            for(auto fst = pair->first; fst != pair->second; fst++){
                if(*beg == table->GetUniqueElement(fst->GetPtr())){
                    beg++;
                }
                else{
                    lst->erase(beg);
                }
            }
        }
    }

    pair<set_table::set_iter, set_table::set_iter>* FindColor(int from, int to, set_table* table){
        QColor* to_srch = new QColor();
        pair<set_table::set_iter, set_table::set_iter>* paire = new pair<set_table::set_iter, set_table::set_iter>;
        to_srch->setHsv(from, 0, 0);
        qDebug()<<to_srch->hsvHue();
        paire->first = (*table->at(8))->lower_bound(nodeptr(new NodeColor(*to_srch, true)));
        to_srch->setHsv(to, 0, 0);
        qDebug()<<to_srch->hsvHue();
        multiset<nodeptr, NodeCreator_n_comparator> set(paire->first--, (*table->at(8))->end()--);
        paire->second = set.upper_bound(nodeptr(new NodeColor(*to_srch, true)));
        paire->first = set.begin();
        if(paire->first == paire->second){
            return nullptr;
        }
        return paire;

    }

    list<Node*>* SmartSearch(set_table* table){
        if(!table || !table->Rows()){
            return nullptr;
        }
        if(name){
           auto iter = (*table->at(1))->find(nodeptr(new NodeLine(name, true)));
           if(iter != (*table->GetUnique())->end()){
            return new list<Node*>({iter->GetPtr()});
           }
           else{
               return nullptr;
           }

        }

        typedef pair<set_table::set_iter, set_table::set_iter> pair_i;
        pair_i* pair = new pair_i();
        pair_i* curr = nullptr;
        list<Node*>* lst = nullptr;
        if(manufac){

            *pair = (*table->at(2))->equal_range(nodeptr(new NodeLine(manufac, true)));

            if(pair->second != pair->first){
                lst = new list<Node*>;
                AddAll(pair->first, pair->second, lst, table);
            }
        }



        if(amount){

            *pair = (*table->at(3))->equal_range(nodeptr(new NodeNumeric(amount, true)));
            if(pair->first != pair->second){
                if(!lst){
                    lst = new list<Node*>;
                    AddAll(pair->first, pair->second, lst, table);

                }
                else{
                    EraseExtra(lst, pair, table);
                }
            }
        }

        if(footage){

            *pair = (*table->at(4))->equal_range(nodeptr(new NodeFootage(footage, true)));
            if(pair->first != pair->second){
                if(!lst){
                    lst = new list<Node*>;
                    AddAll(pair->first, pair->second, lst, table);

                }
                else{
                    EraseExtra(lst, pair, table);
                }
            }
        }


    if(color){
            qDebug()<<"Im there";
            pair = nullptr;
            qDebug()<<color->hsvHue();
            if(color->hsvHue() == 0){
                qDebug()<<"red";
                pair = FindColor(0, 50, table);
            }
            else if(color->hsvHue() == 240){
                qDebug()<<"blue";
                pair = FindColor(180, 270, table);
            }
            else if(color->hsvHue() == 120){
                qDebug()<<"green";
                pair = FindColor(70, 180, table);
            }
            else if(color->hsvHue() == 60){
                qDebug()<<"yellow";
                pair = FindColor(50, 70, table);
            }
            else if(color->hsvHue() == -1){
                qDebug()<<"black";
                pair = FindColor(-1, -1, table);
            }
            while(1){
                if(pair){
                if(!lst){
                    lst = new list<Node*>;
                    AddAll(pair->first, pair->second, lst, table);
                }
                else{
                    EraseExtra(lst, pair, table);
                }
            }
            if(!color || color->hsvHue() != 0){
              break;
            }
            else{
                qDebug()<<"red";
                pair = FindColor(270, 360, table);
                color = nullptr;
            }
    }
    }

    if(complist){
        pair = new pair_i;
        pair->first = ((*table->at(9))->lower_bound(new NodeComponent(complist, true)));
        pair->second = (*table->at(9))->end();
        if(pair->first != pair->second){
            if(!lst){
                lst = new list<Node*>;
            }
                for(pair->first; pair->first != pair->second; pair->first++){
                    if(Yarn_saveobj(0,0,0,0,0,0,0,0,0,complist).operator==(pair->first)){
                       lst->push_back(table->GetUniqueElement(pair->first->GetPtr()));
                    }
                }
                if(!lst->size()){
                    return nullptr;
                }

            }
        else{

        }

        }
    return lst;
    }
};





#endif
