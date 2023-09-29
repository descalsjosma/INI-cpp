#include <iostream>
#include <cmath>
using namespace std;

double triangulo(int valor1, int valor2);
double rectangulo(int valor3, int valor4);
double circulo(double valor1);

int main()
{
    int respuesta;
    double area, base, altura;

    do{
        cout << " Que quieres calcular? " << endl;
        cout << " 1 - triangulo(1)" << endl; 
        cout << " 2 - rectangulo(2) " << endl;
        cout << " 3 - circulo(3):" << endl;
        cin >> respuesta;
    }while( (respuesta>3) || (respuesta<1) );   


    if (respuesta == 1 )
    {
       cout << " Introduce el cateto 1: ";
       cin >> base;
       cout << " Introduce el cateto 2: ";
       cin >> altura;

       area = triangulo(base, altura);
       cout << " area triangulo " << endl;
       cout << "(" <<base << " x " << altura << ")" <<"/2" << " = " << area << endl;

    }else if( respuesta == 2)
    {

      cout << " Introduce la base: ";
       cin >> base;
       cout << " Introduce la altura: ";
       cin >> altura;

       area = rectangulo(base, altura);
       cout << " area rectangulo " << endl;
       cout << base << " x " << altura << " = " << area << endl;

    }else if( respuesta == 3)
    {
        cout << "introducir radio: ";
        cin >> base;

        area = circulo(base);
        cout << " area circulo: " << endl;
        cout << " pi x " << base << " = " << area << endl;
    }else
    {
        cout << "ERROR: opcion incorrecta" << endl;

    }
    
    return 0;
}

double triangulo(int valor1, int valor2)
{
    double total, multi;
    
    multi = valor1 * valor2;
    total = multi/2;

    return total;
}

double rectangulo(int valor3, int valor4)
{
    double total;

    total = valor3 * valor4;

    return total;
}

double circulo(double valor1)
{
    double total;
    //const double pi = 3.141516;

    total = M_PI * pow(valor1, 2); // pow (valor a elevar, cuantas veces) funciona con la libreria cmath

    return total;
}