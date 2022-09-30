#include <iostream>
#include <stdlib.h>
#include "list.cpp"

using namespace std;

int main(){
    int n;
    LinkedList list;

    cout << "Inserté el dato 1" << endl;
    list.push(1);
    cout << "Inserté el dato 2" << endl;
    list.push(1);
    cout << "Inserté el dato 3" << endl;
    list.push(1);
    cout << "Inserté el dato 4" << endl;
    list.push(1);
    cout << "Inserté el dato 5" << endl;
    list.push(1);

    cout << "Suma promedio de los números pares de la lista: " << list.sumPromedioPares(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.sumPromedioImpares(&list) << endl;

    list.elementosRepetidos(&list);

    cout << "Lista antes de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "El número más pequeño dentro de la lista es: " << list.numeroMenor(&list) << endl;

    cout << "El número más grande dentro de la lista es: " << list.numeroMayor(&list) << endl;

    cout << "Ingresa el número que quiere buscar: " << endl;
    cin >> n;
    list.searchElement(&list, n);

    cout << "Ingrese la posición que tiene el elemento que quiere eliminar en la lista: " << endl;
    cin >> n;
    list.deleteElement(&list, n);

    cout << "Lista después de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "El número más pequeño dentro de la lista es: " << list.numeroMenor(&list) << endl;

    cout << "El número más grande dentro de la lista es: " << list.numeroMayor(&list) << endl;

    cout << "Suma promedio de los números pares de la lista: " << list.sumPromedioPares(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.sumPromedioImpares(&list) << endl;

    cout << "Fin del programa" << endl;

    return 0;
    exit(0);
    abort;
}