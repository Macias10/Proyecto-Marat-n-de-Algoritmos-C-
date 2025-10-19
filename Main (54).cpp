#include <iostream>
using namespace std;

int main() {
    int matriz[3][3], suma = 0;

    cout << "Ingrese los elementos de la matriz 3x3:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }

    cout << "La suma total de los elementos es: " << suma << endl;
    return 0;
}


