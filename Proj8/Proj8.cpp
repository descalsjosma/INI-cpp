#include <iostream>
#include <cmath>
using namespace std;

double calcularearectangulo (double valor1, double valor2);
double calculareatriangulo (double valor1, double valor2);
double calculareacirculo (double valor1);
const double pi = 3.141592;

int main ()
{
    int opcion,cont;
    double basetriangulo, alturatriangulo, areatriangulo ;
    double baserectangulo, alturarectangulo, arearectangulo;
    double radio, areacirculo;
    do{
        cout << "Si quieres saber el area del triangulo pulse 1"<< endl;
        cout << "Si quieres saber el area del rectangulo pulse 2"<< endl;
        cout << "Si quieres saber el area de un circulo pulse 3" << endl;
        cout << "Opcion: ";
        cin >> opcion;
        cont++;
        if( (cont>3) && ((opcion>3) || (opcion<1)) ){
            cout<<"Que t'he dit que 1,2 o 3, bobo"<<endl;
            cont=0;
        }
    }while( (opcion>3) || (opcion<1) ); // si es major que 3 o menor que uno no va

    switch (opcion)
    {
        case 1:
        {
            cout << "la base del triangulo es: " << endl;
            cin >> basetriangulo;
            cout << "la altura del triangulo es: "<< endl;
            cin >> alturatriangulo;
            areatriangulo = calculareatriangulo(basetriangulo,alturatriangulo);
            cout << "el area total del triangulo es: " << areatriangulo << endl;
        }
        break;

        case 2:
        {
            cout << "la base del rectangulo es: " << endl;
            cin >> baserectangulo;
            cout << "la altura del rectangulo es: " << endl;
            cin >> alturarectangulo;
            arearectangulo = calcularearectangulo(baserectangulo,alturarectangulo);
            cout << "el area total del rectangulo es: " << arearectangulo << endl;  
        }
        break;

        case 3:
        {
            cout << "el radio del circulo es: " << endl;
            cin >> radio;
            areacirculo = calculareacirculo(radio);
            cout << "el area total del circulo es: " << areacirculo << endl;
        }
        break;

        default:
            cout << "Opcio no vàlida"<<endl;
        break;
    }
    return 0;
}

double calcularearectangulo (double valor1, double valor2)
{
    double areatotalrectangulo;
    areatotalrectangulo = valor1 * valor2;

    return areatotalrectangulo;
}

double calculareatriangulo (double valor1, double valor2)
{
    double areatotaltriangulo;
    areatotaltriangulo = valor1 * valor2 / 2;

    return areatotaltriangulo;
}
double calculareacirculo (double valor1)
{
    double areatotalcirculo;
    areatotalcirculo = pi * pow(valor1, 2); // pow = x^y

    return areatotalcirculo;
}