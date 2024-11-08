#pragma once
#include <iostream>
#include <list> 
#include "funcion.hpp"
#include "cliente.hpp"
#include "empleado.hpp"
#include "decerdo.hpp"
#include "depollo.hpp"
#include "devaca.hpp"
#include "item.hpp"
using namespace std;

class Pedido{
    private:
        string codigo;
        Empleado* vendedor;
        Cliente* cliente;
        list<Item*> itemlist;
    public:
        Pedido(string codigo, Cliente* cliente, Empleado* vendedor);
        string getCodigo();
        Cliente* getCliente();
        Empleado* getVendedor();
        void compra(Articulo* articulo, double cantidad);
        double sumaTotal();
        void mostrar();
};