#pragma once
#include <iostream>
#include "articulo.hpp"
using namespace std;

class DePollo : public Articulo{
    public:
        DePollo(string codigo, string nombre, double precio);
        void mostrar() override;
};