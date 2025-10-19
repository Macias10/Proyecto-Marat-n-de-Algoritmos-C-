
#include <iostream>
using namespace std;

int main() {
    int n, num, pos = 0, neg = 0, ceros = 0;
    cout << "¿Cuántos números desea ingresar?: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> num;
        if(num > 0) pos++;
        else if(num < 0) neg++;
        else ceros++;
    }

    cout << "Positivos: " << pos << "\nNegativos: " << neg << "\nCeros: " << ceros << endl;
    return 0;
}





