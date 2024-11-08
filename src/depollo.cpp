#include <iostream>
#include "depollo.hpp"
using namespace std;


DePollo::DePollo(string codigo, string nombre, double precio)
: Articulo(codigo, nombre, precio){};

void DePollo::mostrar(){
    cout << getNombre() << "    $" << getPrecio() <<endl;
}; 