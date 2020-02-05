#include "SET-TABLE.h"
#include "TableService.h"
#include "windows.h"
#include <QLibrary>
#include <QString>

NodeCreator_n_comparator* set_table::comp = nullptr;

list<Node*>* set_table::FindExact(SaveObj* like_that)
{
//       stack<Node*>* stk = new stack<Node*>;
//        auto beg = GetSORTBYIter();
//        auto end = GetBackOfSortBy();
//        for(beg; beg != end; beg++){
//            if(*like_that == beg){
//               stk->push((*beg).GetPtr());
//            }
//        }

//        if(!stk->size()){
//            return nullptr;
//        }
//        return stk;
        return like_that->SmartSearch(this);
    }

void set_table::EndRow(){
    Node::first = nullptr;
}

set_table::set_table(int col_amount, initializer_list<int> type_names, NodeCreator_n_comparator *obj, int unique_elmnt):unique(0){
    comp = obj;
    try{
        if (type_names.size() > col_amount || col_amount < 0){
            throw NotRightSize("set_table(size_t, initializer_list)", col_amount);
        }
        row_amount = 0;
        this->col_amount = col_amount;
        set_array = new list<multiset<nodeptr, NodeCreator_n_comparator>*>;
        for (int i = 0; i < col_amount; ++i){

            set_array->push_back(new multiset<nodeptr, NodeCreator_n_comparator>(*obj));
        }
        srchr = new type_manager(this, type_names);
        srchr->unique_element = unique_elmnt;

    }
    catch (...){
        exit(1);
    }
}

set_table::list_iter set_table::at(int i){
    if(i > col_amount-1){
        throw(BadArgument("Too big index value", "set_table::at(int)", i));
    }
    auto iter = set_array->begin();
    int j;
    for(j = 0; j < i; ++j, iter++);
    return iter;
}

void set_table::Create_New(int colum_num, Node *value){
    (*at(colum_num))->insert(value);
    EndRow();
    row_amount++;
}

void set_table::Create_Row(const initializer_list<Node *> &items){

    if (items.size() > col_amount){
        throw Exception("Too many items", "set_table::CreateRow(...)");
    }
    auto iter = items.begin();
    auto it = set_array->begin();
    auto end =  items.end();
    ;        int i = 0;

    for (iter; iter !=end;iter++,  it++, i++){
        if(typeid(*iter).name() != typeid(comp->Create_Node_of_type(srchr->col_type[i])).name()){
            throw(UnexpectedType("set_table::Create_Row", typeid(*iter).name()));
        }
        if(i == srchr->unique_element){
            if((*it)->count(*iter) != 0){
                throw(RepeatException("Name need to be unical", "set_table::Create_Row()"));
            }
        }
        (*it)->insert(nodeptr(*iter));
    }
    EndRow();
    row_amount++;

}

bool set_table::isempty(){
    auto iter = set_array->begin();
    for (iter; iter != set_array->end()--;iter++){
        if((*iter)->size() != 0){
            return false;
        }
    }
    return true;
}

int set_table::Rows(){
    return row_amount;
}

set_table::set_iter set_table::GetSORTBYIter(){

    return (*at(srchr->GetSortBy()))->begin();

}

void set_table::SetSortBy(int col){
    srchr->Change_Sort(col);
}

int set_table::GetSortBy(){
    return srchr->GetSortBy();
}

void set_table::Clear(){
    for (auto iter = set_array->begin(); iter != set_array->end()--; ++iter){
        (*iter)->clear();
    }
}

void set_table::AddNewColumn(int type){
    srchr->AddColType(type);
    set_array->push_back(new multiset<nodeptr, NodeCreator_n_comparator>(*comp));
}

set_table::set_iter set_table::GetBackOfSortBy(){
    return (*at(srchr->GetSortBy()))->end();
}

void set_table::Save(SaveObj* obj, const char* filepath){
    //      HINSTANCE h_dll;
    //      h_dll = LoadLibraryA("SavedObjects/SavedObjects.dll");
    //      typedef int (*my_funct_ptr_t)(SaveObj*);
    //      my_funct_ptr_t func;
    //      func = (my_funct_ptr_t)GetProcAddress(h_dll, "SAVE");
    //      func(obj);
    //        QString filename("SavedObjects/SavedObjects.dll");
    //        QLibrary lib(filename);
    //        lib.load();
    //        typedef void (*my_funct_ptr_t)(SaveObj*);
    //        my_funct_ptr_t func;
    //        func = (my_funct_ptr_t)lib.resolve("SAVE");
    //        if(func)
    //        func(obj);

    //        lib.unload();
    obj->WriteToFile(filepath);
}

void set_table::Load(SaveObj* obj, const char* filepath){
    //    vector<SaveObj*>* vec = LOAD();
    //    if(!vec){
    //        return;
    //    }
    //    for(auto iter = vec->begin();iter != vec->end()--;iter++){
    //        (*iter)->Load_to(this);
//    }
    while(obj->LoadFromFile(filepath)){
      obj->Load_to(this);
    }
}

list<Node *> *set_table::FindRange(Node *from, Node *to, int column){
    if(column > col_amount-1){
        throw(BadArgument("Недопустимый номер колонки", "set_table::FindRange", column));
    }
    list_iter tbl = at(column);

    list<Node*>* stk = new list<Node*>;
    auto iter = (*tbl)->lower_bound(from);
    auto end = (*tbl)->upper_bound(to);
    for(; iter != end; iter++){
        stk->push_back(iter->GetPtr());
    }
    if(!stk->size()){
        return nullptr;
    }
    return stk;
}

void set_table::Delete(stack<Node *> *stk){
    row_amount--;
    stack<Node*> s = *stk;
    for(int i = 0; i < srchr->unique_element && stk->size(); i++){
        s.pop();
    }

    Node* curr = s.top();
    s = *stk;
    set_iter from;
    set_iter to;
    curr = (*(*at(srchr->unique_element))->find(nodeptr(curr))).GetPtr();
    curr = curr->GoFirst();
    int i = col_amount-1;
    while(s.size() != 0){
        //            qDebug()<<i;
        //            if(i == 5){
        //            qDebug()<<((QDate*)s.top()->GetVal())->toString();
        //            }
        /*from = */
        (*at(i))->erase(nodeptr(curr));
        //            qDebug()<<i;
        //            while(from->GetPtr() == s.top()){
        //                if(from->GetPtr() == curr){
        //                    (*at(i))->erase(from);
        //                    break;
        //                }
        //                from++;
        //            }
        curr = curr->next_node;
        i--;
        s.pop();
    }
    qDebug()<<"Deleting is ok";
}

set_table::list_iter set_table::GetUnique(){
    if(!unique){
        unique = new list_iter(at(srchr->unique_element));
    }
    return *unique;
}

Node *set_table::GetUniqueElement(Node *node){
    stack<Node*>* stk = node->Get();
    for(int i = 0; i < srchr->unique_element; i++){
        stk->pop();
    }
    return stk->top();
}

Node *NodeCreator_n_comparator::Create_Node_of_type(int id){
    throw(Exception("Node_creator_n_comparator is need to be derived", "Node_Creator_n_comparator::Create_Node_of_type"));
}

bool NodeCreator_n_comparator::operator()(const nodeptr &that, const nodeptr &other)const
{
    //    if(typeid (*that.GetPtr()).name() == typeid(TNode<list<Node*>>).name()){
    //        return (reinterpret_cast<list<Node*>*>(that.GetPtr()->GetVal())->size() < reinterpret_cast<list<Node*>*>(other.GetPtr()->GetVal())->size());
    //    }

    //    if (typeid (*that.GetPtr()).name() == typeid(TNode<multiset<Component>>).name()){

    //            return (reinterpret_cast<set<Component>*>(that.GetPtr()->GetVal()) < reinterpret_cast<set<Component>*>(other.GetPtr()->GetVal()));
    //        }


    //    if (typeid (*that.GetPtr()).name() == typeid(TNode<string>).name()){

    //            return (*reinterpret_cast<string*>(that.GetPtr()->GetVal()) < *reinterpret_cast<string*>(other.GetPtr()->GetVal()));
    //        }

    //        if (typeid (*that.GetPtr()).name() == typeid(TNode<Footage>).name()){

//            return (*reinterpret_cast<Footage*>(that.GetPtr()->GetVal()) < *reinterpret_cast<Footage*>(other.GetPtr()->GetVal()));
//        }
//        if (typeid (*that.GetPtr()).name() == typeid(TNode<QString>).name()){

//            return (*(reinterpret_cast<QString*>(that.GetPtr()->GetVal())) < *((reinterpret_cast<QString*>(other.GetPtr()->GetVal()))));
//        }

//        if (typeid (*that.GetPtr()).name() == typeid(TNode<QDate>).name()){
//            return (*reinterpret_cast<QDate*>(that.GetPtr()->GetVal()) < *reinterpret_cast<QDate*>(other.GetPtr()->GetVal()));
//        }
//        if (typeid (*that.GetPtr()).name() == typeid(TNode<int>).name()){

//            return (*reinterpret_cast<int*>(that.GetPtr()->GetVal()) < *reinterpret_cast<int*>(other.GetPtr()->GetVal()));
//        }
//        if (typeid (*that.GetPtr()).name() == typeid(TNode<QTextDocument*>).name()){

//            return (reinterpret_cast<QTextDocument*>(that.GetPtr()->GetVal()) < reinterpret_cast<QTextDocument*>(other.GetPtr()->GetVal()));
//        }
//        if (typeid (*that.GetPtr()).name() == typeid(TNode<double>).name()){

//            return (*reinterpret_cast<double*>(that.GetPtr()->GetVal()) < *reinterpret_cast<double*>(other.GetPtr()->GetVal()));
//        }
//        if (typeid (*that.GetPtr()).name() == typeid(EMPTY).name() && typeid (*other.GetPtr()).name() != typeid(EMPTY).name()){

//            return false;
//        }
//        if (typeid (*other.GetPtr()).name() == typeid(EMPTY).name() && typeid (*that.GetPtr()).name() != typeid(EMPTY).name()){

//            return true;
//        }
//        if (typeid (*other.GetPtr()).name() == typeid(EMPTY).name() && typeid (*that.GetPtr()).name() == typeid(EMPTY).name()){
//           return false;
//        }
//        if(typeid (*that.GetPtr()).name() != typeid (*other.GetPtr()).name()){
//              throw( UnexpectedType("node_ptr::operator<", typeid(other.GetPtr()).name()));
//        }
//       throw( UnexpectedType("node_ptr::operator<", typeid(*that.GetPtr()).name()));
    return set_table::comp->operator()(that, other);
}

