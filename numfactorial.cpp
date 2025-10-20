#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) f *= i;
    return f;
}

int main() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    cout << "El factorial de " << num << " es " << factorial(num) << endl;
    return 0;
}
