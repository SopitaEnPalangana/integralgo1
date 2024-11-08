#pragma once
#include <iostream>
using namespace std;

class Empleado{
    private:
        int codigo;
        string nombre;
    public:
        Empleado(int codigo, string nombre);
        int getCodigo();
        string getNombre();
        void mostrar();
};