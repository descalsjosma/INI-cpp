#include <iostream>
using namespace std;


const int numero = 100;

typedef struct{
    double pes;
    int roig;
    int verd;
    int groc;
    double preciocaja;
}tCaixa;
tCaixa caixa[numero];


double pespimento;
int colorpimento; // 1 rojo, 2 verde, 3 amarillo
int respuesta;

int main()
{
        
    do{
        do
        {  cout << "indique el color del pimiento : 1=roig, 2=verd, 3=grog " << endl;
        cin >> colorpimento;
         if( (colorpimento != 1) || (colorpimento != 2) || (colorpimento != 3) )
         {
            cout << "indique un color valido. " << endl;
         }

          } while ( colorpimento ==1  || colorpimento ==2 || colorpimento ==3);

    

     if(colorpimento == 1){
            if(caixa[numero].roig >= 1){

                caixa[numero].roig++;

                cout << "indique el peso del pimiento: " << endl;
                cin >> caixa[numero].pes;
            }


     }else if (colorpimento == 2){
            if(caixa[numero].verd >= 1){

                caixa[numero].verd++;
                
                cout << "indique el peso del pimiento: " << endl;
                cin >> caixa[numero].pes;
            }

     }else if  (colorpimento == 3){
            if(caixa[numero].groc >= 1){

                caixa[numero].groc++;

                cout << "indique el peso del pimiento: " << endl;
                cin >> caixa[numero].pes;
            }

      }if(caixa[numero].roig == 1 && caixa[numero].verd == 1 && caixa[numero].groc == 1){

        cout << " caja numero " << numero+1 << " LLENA "<< endl;
        cout << "***************************************" << endl;
        cout << "peso de la caja: " << caixa[numero].pes << endl;
        cout << "esta caja tiene un precio de: " << caixa[numero].preciocaja = caixa[numero].pes*1.2 << "euros" << endl;        
        cout << "***************************************" << endl;
        cout << "Si desea crear mas cajas pule 1. Para salir pulse 0" << endl;
        cin >> respuesta;

    }

    }while(respuesta !=0);



      return 0;
}


        
          



