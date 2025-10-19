#include <iostream>
using namespace std;

int main() {
    float num, suma = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Número " << i << ": ";
        cin >> num;
        suma += num;
    }

    cout << "Promedio: " << suma / 10 << endl;
    return 0;
}
