#include <iostream>
using namespace std;

int main() {
    int numero;

    // Entrada de datos
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Proceso: determinar si es par o impar
    if (numero % 2 == 0) {
        cout << "El número es par." << endl;
    } else {
        cout << "El número es impar." << endl;
    }

    return 0;
}




