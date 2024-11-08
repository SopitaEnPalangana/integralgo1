#include <iostream>
#include "cliente.hpp"
#include "decerdo.hpp"
#include "depollo.hpp"
#include "devaca.hpp"
#include "empleado.hpp"
#include "funcion.hpp"
#include "item.hpp"
#include "pedido.hpp"

int main(){
    //crear empleados
    Empleado* sofia = new Empleado(65, "Sofia");
    Empleado* eugenia = new Empleado(128, "Ma. Eugenia");
    Empleado* anita = new Empleado(49, "Ana R.");

    //crear articulos
    DeVaca* milaNalga = new DeVaca("A001", "Milanesa Nalga", 7500);
    DeVaca* milaLomo = new DeVaca("A002", "Milanesa Lomo", 9000);
    DeVaca* carne = new DeVaca("A003", "Carne Picada", 2000);
    DePollo* milaPollo = new DePollo("A004", "Milanesa Pollo", 6000);
    DePollo* patamuslo = new DePollo("A005", "Patamuslo", 4000);
    DeCerdo* costillitas = new DeCerdo("A006", "Costillitas de Cerdo", 5000);
    
    //crear clientes
    Cliente* dora = new Cliente("C001", "Dora Chica", "Colon 1234");
    Cliente* claudio = new Cliente("C002", "Loidi Claudio", "Moreno 4518");
    Cliente* martin = new Cliente("C003", "Lopez Martin", "Peru 1618");

    //crear pedidos con sus items
    Pedido* pedidodora = new Pedido("P001",dora,sofia);
    pedidodora->compra(milaNalga, 2);
    pedidodora->compra(carne, 1);

    Pedido* pedidoclaudio = new Pedido("P002",claudio,anita);
    pedidoclaudio->compra(costillitas, 1);
    pedidoclaudio->compra(milaPollo, 1);
    pedidoclaudio->compra(carne, 2);

    Pedido* pedidomartin = new Pedido("P003",martin, anita);
    pedidomartin->compra(patamuslo, 4);
    pedidomartin->compra(milaLomo, 2);

    //mostrarlos en pantalla
    cout << "----------------------------" <<endl;
    cout << "           PEDIDOS          " <<endl;
    pedidodora->mostrar();
    pedidoclaudio->mostrar();
    pedidomartin->mostrar();
    pauseConsole();

    //borrar todo
    delete sofia;
    delete eugenia;
    delete anita;
    delete milaNalga;
    delete milaLomo;
    delete carne;
    delete milaPollo;
    delete patamuslo;
    delete costillitas;
    delete dora;
    delete claudio;
    delete martin;
    delete pedidodora;
    delete pedidoclaudio;
    delete pedidomartin;
    return 0;
}