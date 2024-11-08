#pragma once
#include <iostream>
#include "articulo.hpp"
using namespace std;

class Item{
    private:
        Articulo* articulo;
        double cantidad;
    public:
        Item(Articulo* articulo, double cantidad);
        double getCantidad();
        Articulo* getArticulo();
        void mostrar();
};