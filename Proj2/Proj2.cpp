#include <iostream>
using namespace std;


double multiplica(int valor1, double valor2);


int main()
{
    int cantidad;
    double precio, total;
    
    cout << "Introduce la cantidad: ";
    cin >> cantidad;
    cout << "Introduce el precio: ";
    cin >> precio;

    total = multiplica(cantidad,precio);
    cout << cantidad << " x " << precio << " = "
    << total << endl;
    return 0;
}

double multiplica(int valor1, double valor2)
{
    double temp;
    temp = valor1 * valor2;    

    return temp;
}
