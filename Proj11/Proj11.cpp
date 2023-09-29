011#include <iostream>
#include <cmath>

using namespace std;
//const int Cantitat = 5;


typedef struct{
    string nombre;
    string cognom;
    string NIF;
    int edad;
    double salari;
    } tPER;
tPER persona[100];
int repetir;

float salarianual(float sou);

int main()

{
   cout << "Introduix els operaris, maxim 100(Introduix 0 per a acabar)"<< endl;
   int i = 0;
    do
    {
        cout<< "Introduix el nom de la persona "<< i<< endl;
        cin >> nom;
        persona[i].nombre = nom;
        cout<< "Introduix el cognom de la persona "<<i << endl;
        cin>> cog;
        persona[i].cognom = cog;
        cout << "Introduix el NIF de la persona "<<i << endl;
        cin>> nif;
        persona[i].NIF= nif;
        cout << "Introduix la edadde la persona "<<i << endl;
        cin >> eda;
        persona[i].edad= eda;
        cout << "introduix el salari de la persona "<<i << endl;
        cin >> salari;
        i++;
        cout << "presiona 1 per introduir altre usuari 0 per acabar"<< endl; 
        cin >>repetir;
    }while(repetir ==1 && i < 100); 
    for(int j=0;j<i;j++){
        cout << "############# DADES DELS EMPLEATS: ######################"<< endl;
        cout <<persona[j].nombre<<" "<< persona[j].edad<<" " << persona[j].cognom<< " "<<persona[j].NIF<<" "<< persona[j].salarianu << endl;
    }
    return 0;
}

float salarianual(float sou){
    
}