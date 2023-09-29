#include <iostream>
using namespace std;

const int Colores = 3;
typedef enum { rojo, verde, azul } tRGB;
typedef int tColor[Colores];
tColor color;


int main()

{
    cout << "Cantidad de rojo (0-255): ";
    cin >> color[rojo];
    cout << "Cantidad de verde (0-255): ";
    cin >> color[verde];
    cout << "Cantidad de azul (0-255): ";
    cin >> color[azul];

    cout << "Has elegido " << color[rojo] << " de color rojo, " << color[verde] << " de verde y " << color[azul] << " de azul." << endl;

    return 0;

}
