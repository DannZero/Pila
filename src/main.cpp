/**
 *	Autor: Daniel Ponce de León Súchil
 */

#include "Pila.h"
using namespace std;

int main()
{
    int opc, a, b;
    Pila p = Pila();
    do
    {
        cout << "1. push" << endl;
        cout << "2. pop" << endl;
        cout << "3. show" << endl;
        cout << "0. Salir del Programa..." << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "Ingrese el dato: ";
            cin >> a;
            p.push(a);
            break;
        case 2:
            cout << p.pop() << endl;
            break;
        case 3:
            p.show();
            break;
        case 0:
            break;
        default:
            cout << "Opción inválida." << endl;
        }
    } while (opc != 0);
    return 0;
}
