#include "SET-NODE.h"

Node* Node::first = nullptr;

Node::~Node()
{
   next_node = nullptr;
   prev_node = nullptr;
   delete this;
}

Node::Node(bool not_a_row, Node* next_node){
    if(!not_a_row){
    this->prev_node = nullptr;
        if (next_node == nullptr){

                this->next_node = first;
                if (first != nullptr){
                        first->prev_node = this;
                }
                        first = this;
        }
        else{
                delete this->next_node;
                this->next_node = next_node;
        }
    }
}
