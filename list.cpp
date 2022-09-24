#include <iostream>
#include "list.h"

using namespace std;

LinkedList::LinkedList(){
    this->head = nullptr;
}

LinkedList::~LinkedList(){
    while (this->head != nullptr) pop();
}

void LinkedList::push(int value){
    this->head = new Node(value, this->head);
}

int LinkedList::pop(){
    int value;

    if(this->head != nullptr){
        value = this->head->getValue();
        Node *temp = this->head;
        this->head = this->head;
        delete temp;
    } else{
        throw range_error("Lista vacía.");
    }

    return value;
}