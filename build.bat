g++ -I./include -c ./src/articulo.cpp
g++ -I./include -c ./src/cliente.cpp
g++ -I./include -c ./src/decerdo.cpp
g++ -I./include -c ./src/depollo.cpp
g++ -I./include -c ./src/devaca.cpp
g++ -I./include -c ./src/empleado.cpp
g++ -I./include -c ./src/funcion.cpp
g++ -I./include -c ./src/item.cpp
g++ -I./include -c ./src/pedido.cpp
g++ -I./include -c main.cpp

g++ -I./include articulo.o cliente.o decerdo.o depollo.o devaca.o empleado.o funcion.o item.o pedido.o main.o -o app.exe

DEL *.o

app.exe