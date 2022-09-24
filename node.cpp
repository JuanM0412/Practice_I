#include <iostream>
#include "node.h"

using namespace std;

Node::Node(int value, Node *_next = nullptr){
    this->data = value;
    this->next = _next;
}

int Node::getValue(){
    return this->data;    
}

void Node::setValue(int value){
    data = value;
}

void Node::setNext(Node *_next){
    next = _next;
}