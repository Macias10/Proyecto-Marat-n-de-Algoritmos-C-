#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, mediaArit, mediaGeo;

    cout << "Ingrese tres números: ";
    cin >> a >> b >> c;

    mediaArit = (a + b + c) / 3;
    mediaGeo = cbrt(a * b * c);

    cout << "Media aritmética: " << mediaArit << endl;
    cout << "Media geométrica: " << mediaGeo << endl;

    return 0;
}










