#include <iostream>
using namespace std;

int main() {
    float precio, iva, total;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    iva = precio * 0.12;
    total = precio + iva;

    cout << "IVA: " << iva << "\nTotal a pagar: " << total << endl;
    return 0;
}













