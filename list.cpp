#include <iostream>
#include "list.h"

using namespace std;

LinkedList::LinkedList(){
    this->head = nullptr;
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
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        cout << "Los elementos que hay dentro de la lista son los siguientes: " << endl;
        Node *act;
        act = l->head;
        while(act != nullptr){
            cout << act->getValue() << endl;
            act = act->getNext();
        }
    }
}

void LinkedList::showElements(LinkedList *l){
    Node *act;
    act = l->head;
    while(act != nullptr){
        cout << act->getValue() << endl;
        act = act->getNext();
    }
}

void LinkedList::searchElement(LinkedList *l, int n){
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        Node *aux1 = l->head;
        Node *aux2 = aux1->getNext();
        int i = 1;
        while(aux2 != nullptr && aux1->getValue() != n){
            aux1 = aux2;
            aux2 = aux1->getNext();
            i++;
        }
        if(aux1->getValue() == n){
            cout << "La posición del elemento en la lista es: " << i << endl;
        }
        else{
            cout << "El elemento no está en la lista." << endl;
        }
    }
}

int LinkedList::averagePairs(LinkedList *l){
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

int LinkedList::averageOdd(LinkedList *l){
    int i = 0;
    int sum = 0;
    Node *aux1 = l->head;
    Node *aux2 = nullptr;
    while(aux1 != nullptr){
        if(aux1->getValue()%2 != 0){
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

int LinkedList::lowestNum(LinkedList *l){
    if(l->head == nullptr){
        return 0;
    }
    else{
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
}

int LinkedList::biggestNum(LinkedList *l){
    if(l->head == nullptr){
        return 0;
    }
    else{
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
}

void LinkedList::showRepeats(LinkedList *l){
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        cout << "Los números repetidos dentro de la lista son: " << endl;
        Node *aux1 = l->head;
        Node *aux2 = nullptr;
        int n;
        while(aux1 != nullptr){
            aux2 = aux1->getNext();
            if(aux1->getValue() == n){
                aux1 = aux1->getNext();
                continue;
            }
            while(aux2 != nullptr){
                if(aux1->getValue() == aux2->getValue()){
                    cout << aux2->getValue() << endl;
                    n = aux2 ->getValue();
                }
                aux2 = aux2->getNext();
            }
            aux1 = aux1->getNext();
        }
    }
}

void LinkedList::deleteRepeats(LinkedList *l){
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        Node *aux1 = l->head;
        Node *aux2 = nullptr;
        Node *aux3 = nullptr;
        while(aux1 != nullptr){
            aux3 = aux1;
            aux2 = aux3->getNext();
            while(aux2 != nullptr){
                if(aux1->getValue() == aux2->getValue()){
                    aux3->setNext(aux2->getNext());
                    delete aux2;
                }
                aux3 = aux3->getNext();
                if(aux3 != nullptr){
                    aux2 = aux3->getNext();
                } else {
                    break;
                }
            }
            aux1 = aux1->getNext();
        }
        showElements(l);
    }
}

void LinkedList::bubbleSort(LinkedList *l){
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        Node *aux1 = l->head;
        Node *aux2 = nullptr;
        int temp;
        while(aux1->getNext() != nullptr){
            aux2 = aux1->getNext();
            while(aux2 != nullptr){
                if(aux1->getValue() < aux2->getValue()){
                    temp = aux2->getValue();
                    aux2->setValue(aux1->getValue());
                    aux1->setValue(temp);
                }
                aux2 = aux2->getNext();
            }
            aux1 = aux1->getNext();
            aux2 = aux1->getNext();
        }
        cout << "Lista ordenada de manera decreciente: " << endl;
        showElements(l);
    }
}

void LinkedList::reverse(LinkedList *l){
    if(l->head == nullptr){
        cout << "La lista está vacía. Por favor ingrese elementos a la lista para poder utilizar esta opción." << endl;
    }
    else{
        cout << "Lista invertida: " << endl;
        Node *aux1 = l->head;
        Node *aux2 = nullptr;
        Node *aux3 = nullptr;
        while (aux1 != nullptr){
            aux2 = aux1->getNext();
            aux1->setNext(aux3);
            aux3 = aux1;
            aux1 = aux2;
        }
        head = aux3;
        showElements(l);
    }
}