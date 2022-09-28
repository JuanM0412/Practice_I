#include <iostream>
#include "list.cpp"

using namespace std;

int main(){
    int n;
    LinkedList list;

    cout << "Inserté el 1" << endl;
    list.push(10);
    cout << "Inserté el 2" << endl;
    list.push(10);
    cout << "Inserté el 3" << endl;
    list.push(30);
    cout << "Inserté el 4" << endl;
    list.push(10);
    cout << "Inserté el 5" << endl;
    list.push(50);

    cout << "Suma promedio de los números pares de la lista: " << list.sumPromedioPares(&list) << endl;

    cout << "Lista antes de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "Ingresa el número que quiere buscar: " << endl;
    cin >> n;
    list.searchElement(&list, n);

    cout << "Ingrese la posición que tiene el elemento que quiere eliminar en la lista: " << endl;
    cin >> n;
    list.deleteElement(&list, n);

    cout << "Lista después de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "Fin del programa" << endl;

    return 0;

    cout << "Fin del programa" << endl;
}