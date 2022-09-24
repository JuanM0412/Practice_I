#include <iostream>
#include "node.h"

using namespace std;

Node::Node(int value, Node *_next = nullptr){
    this->data = value;
    this->next = _next;
}

void Node::setValue(int value){
    data = value;
}

int Node::getValue(){
    return data;    
}

void Node::setNext(Node *_next){
    next = _next;
}

Node *Node::getNext(){
    return next;    
}