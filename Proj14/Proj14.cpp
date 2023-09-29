#include <iostream>

using namespace std;

const int Dias = 7;

typedef double tTemp[Dias];

typedef struct{
    float MaxTemp;
    int Dia;
}tMaxtTempDia;

float media(tTemp temp);
tMaxtTempDia DiaMasCalor(tTemp calor);

int main() {
    tTemp temp;
    for (int i = 0; i < Dias; i++) 
    { 
       cout << "Temperatura del dia " << i + 1 << ":" << endl;
       cin >> temp [i];
    }
    cout << "Temperatura media: " << media(temp) << endl;
    cout << "La temperatura mas alta es de " << DiaMasCalor(temp).MaxTemp << " grados y fue el dia " << DiaMasCalor(temp).Dia<< endl;

    return 0;
}

float media(tTemp temp) {
    float med, total = 0;
    for (int i = 0; i < Dias; i++) { // Recorrido del array
        total+=temp[i];
    }
    med = total / Dias;
    
    return med;
}

tMaxtTempDia DiaMasCalor(tTemp calor){
    tMaxtTempDia Analizar;

    for (int i = 0; i < Dias; i++) {
        if (Analizar.MaxTemp < calor[i])
        {
            Analizar.MaxTemp = calor[i];
            Analizar.Dia = i+1;
        }
    }
    return Analizar;
}
