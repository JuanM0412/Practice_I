#include <iostream>

using namespace std;

class Node{
    private:
        int data;
        Node *next;
    public:
        Node(int value, Node *next);
        int getValue();
        void setValue(int);
        Node *getNext();
        void setNext(Node *next);
};