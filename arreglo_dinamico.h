#ifndef ARREGLO_DINAMICO
#define ARREGLO_DINAMICO

#include <iostream>
using namespace std;

class ArregloDinamico
{
private:
   string *arreglo;
   size_t tam;
   size_t contador;
   const static size_t MAX = 5;
   void expandir();
   
public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const string &s);
    void insertar_inicio(const string &s);
    size_t size();

    string operator [] (size_t p){
        return arreglo[p];
    }
};

#endif