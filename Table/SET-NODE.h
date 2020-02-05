#pragma once

#include <string>
#include <set>
#include <stack>
#include <list>
#include <typeinfo.h>
#include "Exceptions.h"
#include <QtCore>
using namespace std;

class Node{
private:

protected:


public:
    Node* next_node;
    Node* prev_node;
    static Node* first;
    Node( bool not_a_row = false, Node* = nullptr);
    virtual ~Node();
    virtual void* GetVal()= 0;
    virtual void Set_Val(void* val) = 0;
    virtual stack<Node*>* Get() = 0;
    virtual Node* GoLast() = 0;
    virtual Node* GoFirst() = 0;
};

template <typename T>
class TNode :public Node{
private:

    T* value;
public:
    TNode(T* value = 0, bool not_a_row = false, Node* node = 0) :Node(not_a_row, node){

        if (value){
            this->value = new T(*value);
        }

    }

    TNode(TNode<T>* node){
        if(node){
            this->value = new T(*node->value);
        }
    }

    TNode(const T& value, bool not_a_row = false, Node* node = nullptr) :Node(not_a_row, node){
        this->value = new T(value);
    }


    void* GetVal(){
        return (void*)(value);
    }
    template <typename R> friend  bool operator<(const TNode<R>& left, const TNode<R>& right);

    void Set_Val(void* value){
        this->value = (T*)value;
    }

    stack<Node*>* Get(){

        stack<Node*>* ret = new stack<Node*>;

        Node* curr = this;

        while(1){
            if(curr->prev_node == nullptr){
                 break;
            }
               curr = curr->prev_node;

        }
        while(curr){
            ret->push(curr);
            curr = curr->next_node;
        }

        return ret;

    }

    Node* GoLast(){
        Node* curr = new TNode<T>(this);
        while(1){
            if(curr->next_node == nullptr){
                break;
            }
            curr = curr->next_node;
        }
        return curr;
    }

    Node* GoFirst(){
        Node* curr = this;
        while(1){
            if(curr->prev_node == nullptr){
                 break;
            }
               curr = curr->prev_node;

        }
        return curr;
    }
};

class EMPTY: public Node{
public:
    EMPTY(bool not_a_row = false, EMPTY* emty= nullptr):Node(not_a_row, emty){}
    virtual void* GetVal(){}
    virtual void Set_Val(void*){}
    stack<Node*>* Get(){
        qDebug()<<"sss";
        stack<Node*>* ret = new stack<Node*>;

        Node* curr = this;

        while(1){
            if(curr->prev_node == nullptr){
                 break;
            }
               curr = curr->prev_node;

        }
        while(curr){
            ret->push(curr);
            curr = curr->next_node;
        }

        return ret;

    }

    Node* GoLast(){
        Node* curr = new EMPTY(this);
        while(1){
            if(curr->next_node == nullptr){
                break;
            }
            curr = curr->next_node;
        }
        return curr;
    }

    Node* GoFirst(){
        Node* curr = this;
        while(1){
            if(curr->prev_node == nullptr){
                 break;
            }
               curr = curr->prev_node;

        }
        return curr;
    }
};

//#pragma once

//#include <string>
//#include <set>
//#include <stack>
//#include <QtWidgets>
//#include "Exceptions.h"
//using namespace std;

//class Node{
//private:

//protected:


//public:
//    Node* next_node;
//    Node* prev_node;
//    static Node* first;
//    Node(Node* = nullptr);
//    virtual void* GetVal()= 0;
//    virtual void Set_Val(void* val) = 0;
//    virtual stack<Node*>* Get() = 0;
//};

//template <typename T>
//class TNode :public Node{
//private:

//    T* value;
//public:
//    TNode(T* value = 0, Node* node = 0) :Node(node){

//        if (value){
//            this->value = value;
//        }

//    }


//    TNode(const T& value, Node* node = nullptr) :Node(node){
//        this->value = new T(value);
//    }


//    void* GetVal(){
//        return (void*)(value);
//    }
//    template <typename R> friend  bool operator<(const TNode<R>& left, const TNode<R>& right);

//    void Set_Val(void* value){
//        this->value = (T*)value;
//    }

//    stack<Node*>* Get(){

//        stack<Node*>* ret = new stack<Node*>;

//        Node* curr = this;

//        while(1){
//            if(curr->prev_node == nullptr){
//                 break;
//            }
//               curr = curr->prev_node;

//        }

//        while(curr){
//            ret->push(curr);
//            curr = curr->next_node;
//        }

//        return ret;
//    }

//};

//class EMPTY: public Node{
//public:
//    EMPTY():Node(){}
//    virtual void* GetVal(){}
//    virtual void Set_Val(void*){}
//    stack<Node*>* Get(){

//        stack<Node*>* ret = new stack<Node*>;

//        Node* curr = this;

//        while(1){
//            if(curr->prev_node == nullptr){
//                 break;
//            }
//               curr = curr->prev_node;

//        }

//        while(curr){
//            ret->push(curr);
//            curr = curr->next_node;
//        }

//        return ret;
//    }
//};


//class node_ptr{
//private:
//    Node* ptr;
//public:
//    node_ptr(Node* ptr = nullptr){
//        if(!ptr){
//           this->ptr = new EMPTY;
//        }
//        else{
//            this->ptr = ptr;
//        }
//    }

//    bool operator==(const node_ptr& other){
//        return this->ptr == other.ptr;
//    }

//    Node* get_ptr()const{
//        return ptr;
//    }

//    friend bool operator<(const node_ptr&, const node_ptr&);
//};
