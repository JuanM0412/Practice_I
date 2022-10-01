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
    Node *current = l->head;
    Node *previous = nullptr;
    int i = 1;
    while((current != nullptr) && (i < n)){
        previous = current;
        current = current->getNext();
        i++;
    }
    if(current == nullptr){
        cout << "El elemento no pudo ser eliminado porque no existe dentro de la lista." << endl;
    } 
    else if(previous == nullptr){
        head = current->getNext();
        delete current;
    }
    else {
        previous -> setNext(current->getNext());
        delete current;
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

int LinkedList::sumPromedioPares(LinkedList *l){
    int i = 0;
    int sum = 0;
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    while(aux1 != nullptr){
        if(aux1->getValue()%2 == 0){
            sum += aux1->getValue();
            i++;
        }
        aux2 = aux1;
        aux1 = aux2->getNext();
    }
    if(i != 0){
        return sum/i;
    }
    else{
        return 0;
    }
}

int LinkedList::sumPromedioImpares(LinkedList *l){
    int i = 0;
    int sum = 0;
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    while(aux1 != nullptr){
        if(aux1->getValue()%2 == 1){
            sum += aux1->getValue();
            i++;
        }
        aux2 = aux1;
        aux1 = aux2->getNext();
    }
    if(i != 0){
        return sum/i;
    }
    else{
        return 0;
    }
}

int LinkedList::numeroMenor(LinkedList *l){
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    int menor = 1000000;
    while(aux1 != nullptr){
        if(aux1->getValue() < menor){
            menor = aux1->getValue();
        }
        aux2 = aux1;
        aux1 = aux2->getNext();
    }
    return menor;
}

int LinkedList::numeroMayor(LinkedList *l){
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    int mayor = -1000000;
    while(aux1 != nullptr){
        if(aux1->getValue() > mayor){
            mayor = aux1->getValue();
        }
        aux2 = aux1;
        aux1 = aux2->getNext();
    }
    return mayor;
}

void LinkedList::elementosRepetidos(LinkedList *l){
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    while(aux1 != nullptr){
        aux2 = aux1->getNext();
        while(aux2 != nullptr){
            if(aux1->getValue() == aux2->getValue()){
                cout << "El elemento " << aux2->getValue() << " se repite." << endl;
            }
            aux2 = aux2->getNext();
        }
        aux1 = aux1->getNext();
    }
}

void LinkedList::eliminarRepetidos(LinkedList *l){
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    int i = 1;
    int j;
    while(aux1 != nullptr){
        aux2 = aux1->getNext();
        j = i;
        while(aux2 != nullptr){
            if(aux1->getValue() == aux2->getValue()){
                deleteElement(l, j);
            }
            aux2 = aux2->getNext();
            j++;
        }
        aux1 = aux1->getNext();
        i++;
    }
}