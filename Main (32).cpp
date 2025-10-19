#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;
    cout << "Ingrese el número de términos: ";
    cin >> n;

    cout << "Serie Fibonacci: ";
    for(int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}



