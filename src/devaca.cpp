#include <iostream>
#include "devaca.hpp"
using namespace std;


DeVaca::DeVaca(string codigo, string nombre, double precio)
: Articulo(codigo, nombre, precio){};

void DeVaca::mostrar(){
    cout << getNombre() << "    $" << getPrecio() <<endl;
}; 