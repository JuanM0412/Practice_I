#include <iostream>
#include "node.cpp"

using namespace std;

class LinkedList{
    private:
        Node *head;
    public:
        LinkedList();
        Node *getHead();
        void push(int);
        void deleteElement(LinkedList *l, int); //Eliminar elemento
        void showElement(LinkedList *l);
        void showElements(LinkedList *l);
        void searchElement(LinkedList *l, int);
        int averagePairs(LinkedList *l);
        int averageOdd(LinkedList *l);
        int lowestNum(LinkedList *l);
        int biggestNum(LinkedList *l);
        void showRepeats(LinkedList *l);
        void deleteRepeats(LinkedList *l);
        void bubbleSort(LinkedList *l);
        void reverse(LinkedList *l);
};