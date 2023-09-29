#include <iostream>
#include <cmath>

using namespace std;

int main(){

    float examen, actitud, notapracticas=0;
    int numeropracticas;
    double acc, notafinal;
    string nombre, apellido;
    
    cout << "Antes de empezar, introduce tu nombre: " << endl;
    cin >> nombre;
    cout << "Ahora tu apellido: " << endl;
    cin >> apellido;
    cout << "Introduce la nota del examen " << endl;
    cin >> examen;
    cout << "Ahora, dime el numero de practicas que has realizado. " << endl;
    cin >> numeropracticas;
    cout << "Dime la nota de tu actitud: " << endl;
    cin >> actitud;
s
    notafinal = (examen * 0.6) + (acc/numeropracticas * 0.3) + (actitud * 0.1);
    cout << "Tu nota es: " << notafinal << "." << endl;
    if(notafinal < 5){
        cout << "Estas suspendido" << endl;
    }else
    if(notafinal >= 5 && notafinal < 8){
        cout << "Estas Aprovado" << endl;
    }else
    if(notafinal >= 8 && notafinal < 9 ){
        cout << "Notable !!" << endl;
    }else{
        cout << "Sobresaliente" << endl;
    }
    return 0;
}