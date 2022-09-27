#include <iostream>
#include "list.h"

using namespace std;

LinkedList::LinkedList(){
    this->head = nullptr;
}

LinkedList::~LinkedList(){
    while (this->head != nullptr);
}

void LinkedList::push(int value){
    this->head = new Node(value, this->head);
}

void LinkedList::deleteElement(LinkedList *l, int n){
    Node *aux1 = l->head;
    Node *aux2 = aux1->getNext();
    int i = 1;
    while(aux2 != nullptr && aux2->getValue() != n){
        aux1 = aux2;
        aux2 = aux1->getNext();
        i++;
    }
    if(aux2->getValue() == n){
        aux1->setNext(aux2->getNext());
        cout << "El elemento " << n << " fue eliminado correctamente" << endl;
        free(aux2);
    } else {
        cout << "El elemento no pudo ser eliminado porque no existe dentro de la lista." << endl;
    }
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