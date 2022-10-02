#include <iostream>
#include <stdlib.h>
#include <exception>
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
        cout << "Seleccione una de las opciones mostradas anteriormente: ";
        cin >> option;
        confirm = 's';
        cout << "\n\n\n";
        switch (option){
            case 1:
                cout << "-----------------------------" << endl;
                cout << "Insertar elemento en la lista" << endl;
                cout << "-----------------------------" << endl;
                while(yes == confirm){
                    cout << "Ingrese el número que quiere insertar en la lista: " << endl;
                    cin >> n;
                    list.push(n);
                    cout << "¿Desea seguir insertando elementos a la lista? ('s' para sí, 'n' para no): " << endl;
                    cin >> confirm;
                }
                break;
            case 2:
                cout << "-----------------------------" << endl;
                cout << "Mostrar elementos de la lista" << endl;
                cout << "-----------------------------" << endl;
                list.showElement(&list);
                break;
            case 3:
                cout << "---------------------------" << endl;
                cout << "Buscar elemento en la lista" << endl;
                cout << "---------------------------" << endl;
                cout << "Ingrese la posición del elemento que quiere buscar dentro de la lista: ";
                cin >> n;
                list.searchElement(&list, n);
                break;
            case 4:
                cout << "-----------------------------" << endl;
                cout << "Eliminar elemento de la lista" << endl;
                cout << "-----------------------------" << endl;
                cout << "Ingrese la posición del elemento que desea eliminar: " << endl;
                cin >> n;
                list.deleteElement(&list, n);
                break;
            case 5:
                cout << "------------------------------------" << endl;
                cout << "Calcular suma promedio números pares" << endl;
                cout << "------------------------------------" << endl;
                cout << "La suma promedio de los números pares que hay dentro de la lista es: " << list.averagePairs(&list) << endl;
                break;
            case 6:
                cout << "--------------------------------------" << endl;
                cout << "Calcular suma promedio números impares" << endl;
                cout << "--------------------------------------" << endl;
                cout << "La suma promedio de los números impares que hay dentro de la lista es: " << list.averageOdd(&list) << endl;
                break;
            case 7:
                cout << "------------------------" << endl;
                cout << "Número menor de la lista" << endl;
                cout << "------------------------" << endl;
                cout << "El número menor presente en la lista es: " << list.lowestNum(&list) << endl;
                break;
            case 8:
                cout << "------------------------" << endl;
                cout << "Número mayor de la lista" << endl;
                cout << "------------------------" << endl;
                cout << "El número mayor presente en la lista es: " << list.biggestNum(&list) << endl;
                break;
            case 9:
                cout << "-------------------------------" << endl;
                cout << "Elementos repetidos en la lista" << endl;
                cout << "-------------------------------" << endl;
                list.showRepeats(&list);
                break;
            case 10:
                cout << "----------------------------------------" << endl;
                cout << "Eliminar elementos repetidos de la lista" << endl;
                cout << "----------------------------------------" << endl;
                cout << "Esta es la lista sin los elementos repetidos: " << endl;
                list.deleteRepeats(&list);
                while(yes == confirm){
                    cout << "¿Su lista sigue teniendo elementos repetidos? ('s' para sí, 'n' para no): " << endl;
                    cin >> confirm;
                    list.deleteRepeats(&list);
                }
                break;
            case 11:
                cout << "-------------------------------------" << endl;
                cout << "Ordenar la lista en forma decreciente" << endl;
                cout << "-------------------------------------" << endl;
                list.bubbleSort(&list);
                break;
            case 12:
                cout << "-----------------" << endl;
                cout << "Invertir la lista" << endl;
                cout << "-----------------" << endl;
                list.reverse(&list);
                break;
            case 13:
                cout << "Muchas gracias por haber usado esta aplicación." << endl;
                loop = false;
                break;
            default:
                cout << "Ingresa una opción válida (1 - 13)." << endl;
                break;
        }
    }

    return 0;
}

void menu(){
    cout << "\n\n\n";
    cout << "----------------------------------------------------------------" << endl;
    cout << "             MENÚ DE LISTA ENLAZADA CON ENTEROS:" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "1. Insertar elemento en la lista. \n2. Mostrar elementos de la lista. \n3. Buscar elemento en la lista. \n4. Eliminar elemento de la lista. \n5. Calcular la suma promedio de los números pares de la lista. \n6. Calcular la suma promedio de los números impares de la lista. \n7. Mostrar el número menor de la lista. \n8. Mostrar el número mayor de la lista. \n9. Mostrar elementos repetidos de la lista. \n10. Eliminar elementos repetidos de la lista. \n11. Ordenar los elementos de la lista en forma decreciente. \n12. Invertir los elementos de la lista. \n13. Salir." << endl;
    cout << "----------------------------------------------------------------" << endl;
}