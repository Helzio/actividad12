#ifndef ARREGLO_DINAMICO
#define ARREGLO_DINAMICO

#include <iostream>
using namespace std;

template <class T>
class ArregloDinamico
{
private:
    T *arreglo;
    size_t tam;
    size_t contador;
    const static size_t MAX = 5;
    void expandir();

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_final(const T &t);
    void insertar_inicio(const T &t);
    void insertar(const T &t, size_t index);

    void eliminar_inicio();
    void eliminar_final();
    void eliminar(size_t index);

    size_t size();

    T operator[](size_t p)
    {
        return arreglo[p];
    }
};

template <class T>
ArregloDinamico<T>::ArregloDinamico()
{
    arreglo = new T[MAX];
    contador = 0;
    tam = MAX;
}

template <class T>
ArregloDinamico<T>::~ArregloDinamico()
{
    delete[] arreglo;
}

template <class T>
void ArregloDinamico<T>::insertar_final(const T &t)
{
    if (contador == tam)
    {
        // expandir arreglo
        expandir();
    }

    arreglo[contador] = t;
    contador++;
}

template <class T>
void ArregloDinamico<T>::insertar_inicio(const T &t)
{
    if (contador == tam)
    {
        // expandir arreglo
        expandir();
    }

    for (size_t i = contador; i > 0; i--)
    {
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[0] = t;
    contador++;
}

template <class T>
void ArregloDinamico<T>::insertar(const T &t, size_t index)
{
    if (index >= contador)
    {
        cout << "Posición no valida" << endl;
        return;
    }

    if (contador == tam)
    {
        expandir();
    }

    for (size_t i = contador; i > index; i--)
    {
        arreglo[i] = arreglo[i - 1];
    }

    arreglo[index] = t;
    contador++;
}

template <class T>
void ArregloDinamico<T>::eliminar_inicio()
{
    if (contador == 0){
        cout << "No hay ningún elemento para eliminar" << endl;
        return;
    }

    contador--;
    for (size_t i = 0; i < contador; i++)
    {
        arreglo[i] = arreglo[i + 1];
    }
}

template <class T>
void ArregloDinamico<T>::eliminar_final()
{
    if (contador == 0){
        cout << "No hay ningún elemento para eliminar" << endl;
        return;
    }
    contador--;
}

template <class T>
void ArregloDinamico<T>::eliminar(size_t index)
{
    if (contador == 0){
        cout << "No hay ningún elemento para eliminar" << endl;
        return;
    }

    if (index >= contador)
    {
        cout << "Posición no valida" << endl;
        return;
    }

    contador--;
    for (size_t i = index; i < contador; i++)
    {
        arreglo[i] = arreglo[i + 1];
    }

}

template <class T>
void ArregloDinamico<T>::expandir()
{
    string *nuevo = new string[tam + MAX];
    for (size_t i = 0; i < contador; i++)
    {
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

template <class T>
size_t ArregloDinamico<T>::size()
{
    return contador;
}

#endif