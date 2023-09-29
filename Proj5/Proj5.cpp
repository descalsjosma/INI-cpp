#include <iostream>
using namespace std;

int main()
{
    int año;
    char eixir;

    do{
        cout <<" En este programa se calcularan los años bisiestos: " << endl;
        cout << " Introduzca el año elegido:" << endl;
        cin >> año;

        if (año%400 == 0){
            cout << "Este año es bisiesto" << endl;
        }else if(año%4 == 0 and año%100 != 0){
            cout<< " Este año es bisiesto"<< endl;
        }else {
            cout << " Este año no es bisiesto" << endl;    
        }
        cout<<"Pulsa e per eixir o qualsevol altra tecla per continuar"<<endl;
        cin>>eixir;
    }while( eixir!='e' );
    return 0;
}
