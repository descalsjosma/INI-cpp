#include <iostream> 
using namespace std;


const int numero = 100;

typedef struct{
    int pes;
    int numtarong=0;
}tMalla;
tMalla cal1[numero],cal2[numero],cal3[numero];

typedef enum{tcal1,tcal2,tcal3}tCal;
tCal Calibre;

double diametre, pesfruta;
int poscal1=0, poscal2=0, poscal3=0;
int respuesta,i,x,m;


int main()
{
    do
    {
        do
        {  
            cout << "indique el diametro de la naranja: " << endl;
            cin >> diametre;
            if ( diametre <5 || diametre >12 ){
                cout <<  "introduzca un diametro valido" << endl;
            }            
        } while (diametre <5 || diametre >12);    
        cout << "indique el peso de la naranja: " << endl;
        cin >> pesfruta;

        if(diametre >=5 && diametre <7){
            Calibre = cal1;
        }else
        if(diametre >=7 && diametre <9){
            Calibre = cal2;
        }else
        if(diametre >=9 && diametre <12){
            Calibre = cal3;
        }
        
        switch (Calibre)
            case tcal1:
                if(cal1[poscal1].pes<5){            
                    cal1[poscal1].pes+=pesfruta;
                    cal1[poscal1].numtarong+=1;
                }
                if(cal1[poscal1].pes>=5){
                    cout << "Malla de Cal-1 completada amb pes " << cal1[poscal1].pes << " i " << cal1[poscal1].numtarong << " taronges" <<endl;
                    cout << "Si quieres introducir mas naranjas pulsa 1 o pulsa 0 para salir" << endl;
                    cin >> respuesta;
                    poscal1++;
                }
                break;
            case tcal2:
                if(cal2[poscal2].pes<5){            
                    cal2[poscal2].pes+=pesfruta;
                    cal2[poscal2].numtarong+=1;
                }
                if(cal2[poscal2].pes>=5){
                    cout << "quieres introducir mas naranjas pulsa 1 y pulsa 0 para salir" << endl;
                    cin >> respuesta;
                    poscal2++;
                }
            break;
            case tcal3:
                if(cal3[poscal3].pes<5){            
                    cal3[poscal3].pes+=pesfruta;
                    cal3[poscal3].numtarong+=1;
                }
                if(cal3[poscal3].pes>=5){
                    cout << "quieres introducir mas naranjas pulsa 1 y pulsa 0 para salir" << endl;
                    cin >> respuesta;
                    poscal3++;
                }
            break;
        }
        if( (poscal1>=numero) || (poscal2>=numero) || (poscal3>=numero) ){
            respuesta=0;
            cout << "Has arribat al limit de malles" << endl;
        }    
    } while(respuesta !=0);

    cout << "Mallas CALIBRE 1:" << endl;
    for(i=0;i<poscal1;i++){

        cout << " Malla " << i+1 << endl;
        cout << "Número de taronges: " << cal1[i].numtarong << ", con un peso total de " << cal1[i].pes << endl;
    }

    cout << "CALIBRE 2:" << endl;
    for(int x=0;x<poscal2;x++){

        cout << " Malla " << x+1 << endl;
        cout << " hay " << cal2[x].numtarong << " con un peso total de " << cal2[x].pes << endl;

    }

    cout << "CALIBRE 3:" << endl;
    for(int m=0;m<poscal3;m++){
        cout << " hay " << cal3[m].numtarong << " con un peso total de " << cal3[m].pes << endl;
    }
    return 0;
}

