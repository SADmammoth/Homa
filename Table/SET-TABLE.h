/*
   TO USE SET-TABLE IN YOUR PROGRAMM YOU NEED TO CREATE YOUR
   OWN CLASS DERIVED FROM SAVEOBJ AND CLASS DERIVED FROM NODECREATOR.
   SAVEOBJ ALLOWS YOU TO SAVE AND SEARCH ELEMENTS IN YOUR TABLE.
   NODECREATOR PROVIDES INTERFACE TO DEFINE TYPES BY NUMBERS.
   */
#pragma once
#include  "SET-NODE.h"
using namespace std;
#include <vector>

class set_table;
class SaveObj;




class nodeptr{
private:
    Node* ptr;
public:
    nodeptr(Node* ptr = nullptr):ptr(ptr){
    }
    void* GetValue(){
        return ptr->GetVal();
    }
    Node* GetPtr() const{
        return ptr;
    }
    nodeptr& operator=(const nodeptr& node){
      this->ptr = node.ptr;
      return *this;
    }
};

class NodeCreator_n_comparator{
public:
    virtual Node* Create_Node_of_type(int id);
    virtual bool operator()
    (const nodeptr& that, const nodeptr& other)const;
};


class type_manager{
private:
    int* col_type;
    int sort_by;
    typedef multiset<nodeptr, NodeCreator_n_comparator>** table;
    set_table* set_t;
    int type_amount;
    int unique_element;
    type_manager(set_table* set_t, initializer_list<int> types, int sort_by = 0){
        this->set_t = set_t;
        col_type = new int[types.size()];
        type_amount=types.size();
        auto iter = types.begin();
        for (int i = 0; i < types.size(); i++){

            col_type[i] = *iter;
            iter++;
        }
        this->sort_by = sort_by;
    }
    int GetUnqueElement(){
        return unique_element;
    }
    void Change_Sort(int sort_by){
        this->sort_by = sort_by;
    }

    int GetSortBy(){
        return sort_by;
    }

void AddColType(int type){
    int* buf = col_type;
    delete col_type;
    type_amount++;
    col_type = new int[type_amount];
    for(int i = 0; i < type_amount--; ++i){
       col_type[i] = buf[i];
    }
    col_type[type_amount--] = type;
}

    template <typename T> friend Node* Create_w_Val(int id, T val);
friend class set_table;
friend SaveObj;
};

class set_table{
private:
  list<multiset<nodeptr, NodeCreator_n_comparator>*>* set_array;
  static NodeCreator_n_comparator* comp;
  int col_amount;
  int row_amount;
  type_manager* srchr;
  list<multiset<nodeptr, NodeCreator_n_comparator>*>::iterator* unique;
  void EndRow();

public:
   typedef list<multiset<nodeptr, NodeCreator_n_comparator>*>::iterator list_iter;
   typedef multiset<nodeptr, NodeCreator_n_comparator>::iterator set_iter;
   set_table(int col_amount, initializer_list<int> type_names, NodeCreator_n_comparator* obj, int unique_elmnt);
   list<multiset<nodeptr, NodeCreator_n_comparator>*>::iterator at(int i);
   void Create_New(int colum_num, Node* value);
   void Create_Row(const initializer_list<Node*>& items);
   bool isempty();
   int Rows();
   multiset<nodeptr, NodeCreator_n_comparator>::iterator GetSORTBYIter();
   void SetSortBy(int col);
   int GetSortBy();
   friend class Searcher;
   void Clear();
   void AddNewColumn(int type);
   multiset<nodeptr, NodeCreator_n_comparator>::iterator GetBackOfSortBy();
   void Save(SaveObj* obj, const char* filepath);
   void Load(SaveObj* obj, const char* filepath);
   list<Node*>* FindRange(Node* from, Node* to, int column);
   void Delete(stack<Node*>* stk);
   list_iter GetUnique();
   Node* GetUniqueElement(Node* node);
   list<Node*>* FindExact(SaveObj* like_that);
   friend NodeCreator_n_comparator;
};

class SaveObj{
public:
    virtual Node* Load_to(set_table* table) = 0;
    virtual void Set(set_table::set_iter) = 0;
    virtual bool operator==(set_table::set_iter) = 0;
    virtual void WriteToFile(const char* filepath) = 0;
    virtual bool LoadFromFile(const char* filepath) = 0;
    virtual list<Node*>* SmartSearch(set_table* table) = 0;
};
