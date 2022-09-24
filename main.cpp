#include <iostream>
#include "list.cpp"

using namespace std;

int main(){
    LinkedList list;
    cout << "Inserté el 1" << endl;
    list.push(1);
    cout << "Inserté el 2" << endl;
    list.push(2);
    cout << "Inserté el 3" << endl;
    list.push(3);
    cout << "Inserté el 4" << endl;
    list.push(4);
    cout << "Inserté el 5" << endl;
    list.push(5);
    list.showElement(&list);
    return 0;
}