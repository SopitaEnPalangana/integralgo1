#include <iostream>
#include "empleado.hpp"
using namespace std;


Empleado::Empleado(int codigo, string nombre){
    this->codigo = codigo;
    this->nombre = nombre;
};

int Empleado::getCodigo(){
    return this->codigo;
};

string Empleado::getNombre(){
    return this->nombre;
};

void Empleado::mostrar(){
    cout << "Vendedor: " << getNombre() <<endl;
};
