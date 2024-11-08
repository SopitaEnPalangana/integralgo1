#include <iostream>
#include "cliente.hpp"
using namespace std;


Cliente::Cliente(string codigo, string nombre, string domicilio){
    this->codigo = codigo;
    this->nombre = nombre;
    this->domicilio = domicilio;
};

string Cliente::getCodigo(){
    return this->codigo;
};

string Cliente::getNombre(){
    return this->nombre;
};

string Cliente::getDomicilio(){
    return this->domicilio;
};

void Cliente::mostrar(){
    cout << "Cliente: " << getNombre() << "     Domicilio: " << getDomicilio() <<endl;
};
