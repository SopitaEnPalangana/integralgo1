#pragma once
#include <iostream>
#include "articulo.hpp"
using namespace std;

class DeVaca : public Articulo{
    public:
        DeVaca(string codigo, string nombre, double precio);
        void mostrar() override;
};