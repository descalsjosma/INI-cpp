#include <iostream>
using namespace std;


double areaRectangle(double valor1, double valor2);
double areaTriangle(double valor1, double valor2);

int main()
{
    int opcio;
    double base, altura;

    cout<<"Este programa calcula arees."<<endl;
    cout<<"Trieu una opció. 1 - Rectangle, 2 - Triangle"<<endl;
    cin>>opcio;
    if(opcio==1){
        cout<<"Introduix la base: "<<endl;
        cin>>base;
        cout<<"Introduix l'altura: "<<endl;
        cin>>altura;
        areaRectangle(base,altura);
    }
    return 1;

}

double areaRectangle(int valor1, double valor2)
{
    return 0;
}

double areaTriangle(double valor1, double valor2)
{
    return 0;
}