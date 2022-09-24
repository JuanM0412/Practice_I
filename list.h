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
        int pop(); //Eliminar elemento
        void showElement(LinkedList *l);
};