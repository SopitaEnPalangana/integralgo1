#include <iostream>
#include "articulo.hpp"
#include "item.hpp"
using namespace std;

Item::Item(Articulo* articulo, double cantidad){
    this->articulo = articulo;
    this->cantidad = cantidad;
};

double Item::getCantidad(){
    return this->cantidad;
};

Articulo* Item::getArticulo(){
    return this->articulo;
};

void Item::mostrar(){
    cout << this->articulo->getNombre() << " x " << this->cantidad << " x $" << this->articulo->getPrecio() <<endl;
};