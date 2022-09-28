#include <iostream>
//#include <stdlib.h>
#include "list.cpp"

using namespace std;

int main(){
    int n;
    LinkedList list;

    cout << "Inserté el dato 1" << endl;
    list.push(101);
    cout << "Inserté el dato 2" << endl;
    list.push(101);
    cout << "Inserté el dato 3" << endl;
    list.push(301);
    cout << "Inserté el dato 4" << endl;
    list.push(101);
    cout << "Inserté el dato 5" << endl;
    list.push(50);

    cout << "Suma promedio de los números pares de la lista: " << list.sumPromedioPares(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.sumPromedioImpares(&list) << endl;

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

    cout << "Suma promedio de los números pares de la lista: " << list.sumPromedioPares(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.sumPromedioImpares(&list) << endl;

    cout << "Fin del programa" << endl;

    return 0;
    //exit(0);
    //abort;
}