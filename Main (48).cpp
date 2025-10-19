#include <iostream>
using namespace std;

int main() {
    int inicio, fin, contador = 0;
    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;
    cout << "Ingrese el final del rango: ";
    cin >> fin;

    for(int i = inicio; i <= fin; i++) {
        if(i % 2 == 0)
            contador++;
    }

    cout << "Cantidad de números pares en el rango: " << contador << endl;
    return 0;
}

















