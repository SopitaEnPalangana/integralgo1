#pragma once
#include <iostream>
#include <string>
using namespace std;

class Articulo{
    private:
        string codigo;
        string nombre;
        double precio;
    public:
        Articulo(string codigo, string nombre, double precio);
        string getCodigo();
        string getNombre();
        double getPrecio();
        virtual void mostrar();
};