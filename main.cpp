#include <iostream>
#include "list.cpp"

using namespace std;

int main(){

    int n;
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

    cout << "Lista antes de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "Ingresa el número que quiere buscar: " << endl;
    cin >> n;
    list.searchElement(&list, n);

    cout << "Ingrese el número que quiere eliminar: " << endl;
    cin >> n;
    list.deleteElement(&list, n);

    cout << "Lista después de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "Fin del programa" << endl;

    return 0;
}