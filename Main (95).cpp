#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0) return false;
    return true;
}

int main() {
    int n, cont = 0, num = 2;
    cout << "Ingrese cantidad de números primos: ";
    cin >> n;
    while(cont < n) {
        if(esPrimo(num)) {
            cout << num << " ";
            cont++;
        }
        num++;
    }
}
