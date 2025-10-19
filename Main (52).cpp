#include <iostream>
using namespace std;

int main() {
    int n;
    float suma = 0;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;
    float arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> arr[i];
        suma += arr[i];
    }

    cout << "Promedio: " << suma / n << endl;
    return 0;
}
