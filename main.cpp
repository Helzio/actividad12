#include <iostream>
#include "arreglo_dinamico.h"
using namespace std;

void mostrar(ArregloDinamico<string> &arreglo)
{
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main()
{
    ArregloDinamico<string> arreglo;
    arreglo.insertar_inicio("DOS");
    arreglo.insertar_inicio("UNO");
    arreglo.insertar_final("TRES");
    arreglo.insertar_final("CUATRO");
    mostrar(arreglo);

    arreglo.insertar("CINCO", 2);
    mostrar(arreglo);

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    mostrar(arreglo);

    return 0;
}


