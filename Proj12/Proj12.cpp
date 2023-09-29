#include <iostream>
using namespace std;

int suma( int val1, int val2, int val3);


int main()
{

    int cant1 =0, cant2 =0, cant3 =0;
    double peso;
    char respuesta;
    int total;

    do
    {

        cout<< " Introduzca el peso de la pieza" << endl;
        cin>> peso;

        if (peso > 10.2)
        {
            cant1++;

        }else if (peso >=9.2)
        {
            cant2++;

        }else if (peso > 0)
        {
            cant3++;
        }
        
        cout<< " Desea introducir algun peso más?" << endl;
        cout<< " En caso negativo pulse 0, si no cualquier otra tecla" <<endl;
        cin>> respuesta;

    } while ( respuesta !=0 );

    total = suma( cant1 , cant2, cant3);

    cout<< "****************************************" << endl;
    cout<< "Las cantidades son: " << endl;
    cout<< " cantidad 1: " << cant1 << endl;
    cout<< " cantidad 2: " << cant2 << endl;
    cout<< " cantidad 3: " << cant3 << endl;
    cout<< " La cantidad total es: " << total << endl;
    cout<< "****************************************" << endl;




    return 0;
}


int suma( int val1, int val2, int val3)
{
    int total;

    total = val1 + val2 + val3;
    
    return total;
}