#include <iostream>

using namespace std;

const int NumMalles = 100;

typedef struct{
    float pes;
    int numtaronges;
    float preu;
    float excedent;
}tMalla;
tMalla cal1[NumMalles],cal2[NumMalles],cal3[NumMalles];

float diametre, pesTaronja;
bool salir;

int main(){
    do{
        cout<<"Introdueix el diàmtre de la taronja: ";
        cin>>diametre;
        if ( (diametre<5) || (diamtre>12) ){
            cout>>"Diametre no vàlida. Valors entre 5 i 12"<<endl;
            salir=false;
        }else{
            salir=true;
        }
    }while(!salir);

    cout<<"Introdueix el pes de la taronja: ";
    cin>>pesTaronja;

    if( (diametre>=5) && (diametre<7) ){
        
    }

    return 0;
}