/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 2/junio/2024 
*/

#include "Pedido.h"
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
using namespace std;

Pedido::Pedido() : cantidad(0) {
    for (int index = 0; index < MAX_PROD; index++) {
        arrPtrProductos[index] = nullptr;
    }
}

Pedido::~Pedido() {
    for (int index = 0; index < MAX_PROD; index++) {
        if (arrPtrProductos[index] != nullptr) {
            delete arrPtrProductos[index];
            arrPtrProductos[index] = nullptr;
        }
    }
}

void Pedido::leerArchivo(string nombre) {
    ifstream archivo(nombre);
    if (!archivo) {
        cout << "No se pudo abrir el archivo: " << nombre << endl;
        return;
    }

    string tipo, nombreProducto, temporada;
    int precio, peso, clave;

    while (archivo >> tipo) {
        if (tipo == "V") {
            archivo >> nombreProducto >> precio >> peso >> temporada;
            arrPtrProductos[cantidad++] = new Verdura(nombreProducto, precio, peso, temporada);
        } else if (tipo == "C") {
            archivo >> nombreProducto >> precio >> peso >> clave;
            arrPtrProductos[cantidad++] = new Combo(nombreProducto, precio, peso, clave);
        } else if (tipo == "P") {
            archivo >> nombreProducto >> precio >> peso;
            arrPtrProductos[cantidad++] = new Producto(nombreProducto, precio, peso);
        }
    }

    archivo.close();
}

void Pedido::ticketCliente() const {
    int totalGeneral = 0;

    for (int index = 0; index < cantidad; index++) {
        if (arrPtrProductos[index] != nullptr) {
            cout << arrPtrProductos[index]->str() << endl;
            totalGeneral += arrPtrProductos[index]->calculaTotalPagar();
        }
    }

    cout << "Total a pagar: $" << totalGeneral << endl;
}
