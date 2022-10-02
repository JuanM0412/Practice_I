#include <iostream>
#include <stdlib.h>
#include "list.cpp"

using namespace std;

void menu();

int main(){

    int n, option;
    char confirm = 's', yes = 's';
    bool loop = true;
    LinkedList list;

    while(loop){

        menu();
        cin >> option;

        switch (option){
            case 1:
                while(yes == confirm){
                    cout << "Ingrese el número que quiere insertar en la lista: " << endl;
                    cin >> n;
                    list.push(n);
                    cout << "¿Desea seguir insertando elementos a la lista? ('s' para sí, 'n' para no): " << endl;
                    cin >> confirm;
                }
                cout << "\n\n\n";
                break;
            case 2:
                cout << "Los elementos que hay dentro de la lista son los siguientes: " << endl;
                list.showElement(&list);
                cout << "\n\n\n";
                break;
            case 3:
                cout << "Ingrese el elemento que quiere buscar dentro de la lista: " << endl;
                cin >> n;
                list.searchElement(&list, n);
                cout << "\n\n\n";
                break;
            case 4:
                cout << "Ingrese la posición del elemento que desea eliminar: " << endl;
                cin >> n;
                list.deleteElement(&list, n);
                cout << "\n\n\n";
                break;
            case 5:
                cout << "La suma promedio de los números pares que hay dentro de la lista es: " << list.averagePairs(&list) << endl;
                cout << "\n\n\n";
                break;
            case 6:
                cout << "La suma promedio de los números impares que hay dentro de la lista es: " << list.averageOdd(&list) << endl;
                cout << "\n\n\n";
                break;
            case 7:
                cout << "El número menor presente en la lista es: " << list.lowestNum(&list) << endl;
                cout << "\n\n\n";
                break;
            case 8:
                cout << "El número mayor presente en la lista es: " << list.biggestNum(&list) << endl;
                cout << "\n\n\n";
                break;
            case 9:
                cout << "Los números repetidos dentro de la lista son: " << endl;
                list.showRepeats(&list);
                cout << "\n\n\n";
                break;
            case 10:
                cout << "Esta es la lista sin los elementos repetidos: " << endl;
                list.deleteRepeats(&list);
                list.showElement(&list);
                cout << "\n\n\n";
                break;
            case 11:
                cout << "Lista ordenada de manera decreciente: " << endl;
                list.bubbleSort(&list);
                cout << "\n\n\n";
                break;
            case 12:
                cout << "Lista invertida: " << endl;
                list.reverse(&list);
                cout << "\n\n\n";
                break;
            default:
                loop = false;
                break;
        }
    }

    return 0;
    system("PAUSE");
}

void menu(){
    cout << "Menú de lista enlazada de enteros: " << endl;
    cout << "1. Insertar elemento en la lista. \n2. Mostrar elementos de la lista. \n3. Buscar elemento en la lista. \n4. Eliminar elemento de la lista. \n5. Calcular la suma promedio de los números pares de la lista. \n6. Calcular la suma promedio de los números impares de la lista. \n7. Mostrar el número menor de la lista. \n8. Mostrar el número mayor de la lista. \n9. Mostrar elementos repetidos de la lista. \n10. Eliminar elementos repetidos de la lista. \n11. Ordenar los elementos de la lista en forma decreciente. \n12. Invertir los elementos de la lista. \n13. Salir." << endl;
}