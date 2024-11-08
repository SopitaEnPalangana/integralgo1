#pragma once
#include <iostream>
#include "articulo.hpp"
using namespace std;

class DeCerdo : public Articulo{
    public:
        DeCerdo(string codigo, string nombre, double precio);
        void mostrar() override;
};