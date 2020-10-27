#include <iostream>
#include "arreglo_dinamico.h"
using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.insertar_final("programar");
    arreglo.insertar_final("en");
    arreglo.insertar_final("c++");
    arreglo.insertar_final("es");
    arreglo.insertar_final("lo");
    arreglo.insertar_final("mejor");
    arreglo.insertar_final("del");
    arreglo.insertar_final("mundo");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    arreglo.insertar_inicio("nunca:");
    arreglo.insertar_inicio("Nadie");
    
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
