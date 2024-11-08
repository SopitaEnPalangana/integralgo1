#include <iostream>
#include "decerdo.hpp"
using namespace std;


DeCerdo::DeCerdo(string codigo, string nombre, double precio)
: Articulo(codigo, nombre, precio){};

void DeCerdo::mostrar(){
    cout << getNombre() << "    $" << getPrecio() <<endl;
}; 
