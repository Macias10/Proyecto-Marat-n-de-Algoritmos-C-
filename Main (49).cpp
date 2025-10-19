#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        cout << "Ingrese número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Los números ingresados son: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
