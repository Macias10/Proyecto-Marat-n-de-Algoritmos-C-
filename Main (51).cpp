#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arr[i];
    }

    int mayor = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > mayor) mayor = arr[i];
    }

    cout << "El número mayor es: " << mayor << endl;
    return 0;
}
