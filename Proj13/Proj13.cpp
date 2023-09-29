#include <iostream>

using namespace std;

const int Dias = 7;

typedef double tTemp[Dias];
double media(tTemp pepito);

int main() {
    tTemp temp;
    for (int i = 0; i < Dias; i++) { // Recorrido del array
        cout << "Temperatura del día " << i + 1 << ": ";
        cin >> temp[i];
    }
    cout << "Temperatura media: " << media(temp) << endl;

    return 0;
}

double media(tTemp pepito) {
    double med, total = 0;
    for (int i = 0; i < Dias; i++) { // Recorrido del array
        total += pepito[i];
    }
    med = total / Dias;
    
    return med;
}