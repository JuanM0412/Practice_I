#include <iostream>
#include <stdlib.h>
#include "list.cpp"

using namespace std;

void menu();

int main(){
    int n;
    LinkedList list;

    cout << "Inserté el dato 1" << endl;
    list.push(5);
    cout << "Inserté el dato 2" << endl;
    list.push(5);
    cout << "Inserté el dato 3" << endl;
    list.push(4);
    cout << "Inserté el dato 4" << endl;
    list.push(3);
    cout << "Inserté el dato 5" << endl;
    list.push(2);
    cout << "Inserté el dato 6" << endl;
    list.push(1);

    cout << "Suma promedio de los números pares de la lista: " << list.averagePairs(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.averageOdd(&list) << endl;

    cout << "Lista antes de ordenar los elementos: " << endl;
    list.showElement(&list);

    list.bubbleSort(&list);
    cout << "Lista ordenada: " << endl;
    list.showElement(&list);

    list.showRepeats(&list);

    cout << "Lista sin elementos repetidos: " << endl;
    list.deleteRepeats(&list);
    list.showElement(&list);

    cout << "El número más pequeño dentro de la lista es: " << list.lowestNum(&list) << endl;

    cout << "El número más grande dentro de la lista es: " << list.biggestNum(&list) << endl;

    cout << "Ingresa el número que quiere buscar: " << endl;
    cin >> n;
    list.searchElement(&list, n);

    cout << "Ingrese la posición que tiene el elemento que quiere eliminar en la lista: " << endl;
    cin >> n;
    list.deleteElement(&list, n);

    cout << "Lista después de eliminar elementos: " << endl;
    list.showElement(&list);

    cout << "El número más pequeño dentro de la lista es: " << list.lowestNum(&list) << endl;

    cout << "El número más grande dentro de la lista es: " << list.biggestNum(&list) << endl;

    cout << "Suma promedio de los números pares de la lista: " << list.averagePairs(&list) << endl;

    cout << "Suma promedio de los números impares de la lista: " << list.averageOdd(&list) << endl;

    menu();

    return 0;
    exit(0);
    abort;
}

void menu(){
    cout << "Menú de lista enlazada de enteros: " << endl;
    cout << "1. Insertar elemento en la lista. \n2. Mostrar elementos de la lista. \n3. Buscar elemento en la lista. \n4. Eliminar elemento de la lista. \n5. Calcular la suma promedio de los números pares de la lista. \n6. Calcular la suma promedio de los números impares de la lista. \n7. Mostrar el número menor de la lista. \n8. Mostrar el número mayor de la lista. \n9. Mostrar elementos repetidos de la lista. \n10. Eliminar elementos repetidos de la lista. \n11. Ordenar los elementos de la lista en forma decreciente. \n12. Invertir los elementos de la lista. \n13. Salir." << endl;
}