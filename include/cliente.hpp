#pragma once
#include <iostream>
using namespace std;

class Cliente{
    private:
        string codigo;
        string nombre;
        string domicilio;
    public:
        Cliente(string codigo, string nombre, string domicilio);
        string getCodigo();
        string getNombre();
        string getDomicilio();
        void mostrar();
};