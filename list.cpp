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

void LinkedList::showElement(LinkedList *l){
    Node *act;
    act = l->head;

    while(act != nullptr){
        cout << act->getValue() << endl;
        act = act->getNext();
    }
}

void LinkedList::searchElement(LinkedList *l, int n){
    Node *aux1 = l->head;
    Node *aux2 = aux1->getNext();
    int i = 1;
    while(aux2 != nullptr && aux1->getValue() != n){
        aux1 = aux2;
        aux2 = aux1->getNext();
        i++;
    }
    if(aux1->getValue() == n){
        cout << "La posición del elemento en memoria es: " << aux1 << endl;
        cout << "La posición del elemento en la lista es: " << i << endl;
    } else {
        cout << "El elemento no está en la lista." << endl;
    }
}