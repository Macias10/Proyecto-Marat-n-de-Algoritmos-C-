

#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, promedio;
    cout << "Ingrese tres notas: ";
    cin >> n1 >> n2 >> n3;

    promedio = (n1 + n2 + n3) / 3;

    cout << "Promedio: " << promedio << endl;
    if(promedio >= 7)
        cout << "Estado: Aprobado" << endl;
    else
        cout << "Estado: Reprobado" << endl;

    return 0;
}




