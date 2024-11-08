#include <iostream>
#include <list> 
#include "pedido.hpp"
using namespace std;

Pedido::Pedido(string codigo, Cliente* cliente, Empleado* vendedor){
    this->codigo = codigo;
    this->cliente = cliente;
    this->vendedor = vendedor;
};

string Pedido::getCodigo(){
    return this->codigo;
};

Cliente* Pedido::getCliente(){
    return this->cliente;
};

Empleado* Pedido::getVendedor(){
    return this->vendedor;
};

void Pedido::compra(Articulo* articulo, double cantidad){
    Item* item1 = new Item(articulo, cantidad);
    this->itemlist.push_back(item1);
};

double Pedido::sumaTotal(){
    double total = 0;
    double subtotal = 0;
    for (Item* item : itemlist) {
        Articulo* artic = item->getArticulo();
        subtotal = item->getCantidad() * artic->getPrecio();
        total += subtotal;
    }
    return total;
};

void Pedido::mostrar(){
    cout << "----------------------------" <<endl;
    cout << "Pedido " << getCodigo() << "       ";
    this->vendedor->mostrar();
    this->cliente->mostrar();
    cout <<endl;
    cout << "Detalle de compra: " <<endl;
    cout <<endl;
    for (Item* item : itemlist) {
        item->mostrar();
    }
    cout <<endl;
    cout << "Monto a abonar: $" << this->sumaTotal() <<endl;
};