#include <iostream>
#include "node.cpp"

using namespace std;

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList();
        ~LinkedList();
        void push(int);
        void deleteElement(LinkedList *l, int); //Eliminar elemento
        void showElement(LinkedList *l);
        void searchElement(LinkedList *l, int);
        int sumPromedioPares(LinkedList *l);
        int sumPromedioImpares(LinkedList *l);
        int numeroMenor(LinkedList *l);
        int numeroMayor(LinkedList *l);
        void elementosRepetidos(LinkedList *l);
};