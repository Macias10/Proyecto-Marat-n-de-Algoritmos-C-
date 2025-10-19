#include <iostream>
using namespace std;

int main() {
    int base, exp, res = 1;
    cout << "Ingrese base y exponente: ";
    cin >> base >> exp;
    for(int i = 0; i < exp; i++)
        res *= base;
    cout << "Resultado: " << res;
}

