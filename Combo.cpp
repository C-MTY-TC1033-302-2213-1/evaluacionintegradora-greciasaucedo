/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 2/junio/2024 
*/
#include "Combo.h"

Combo::Combo() : Producto(), clave(0) {}
Combo::Combo(string nombre, int precio, int peso, int clave)
    : Producto(nombre, precio, peso), clave(clave) {}


int Combo::calculaTotalPagar() {
    int total = getPrecio() * getPeso() * clave;

    if (clave == 1) {
        total -= (total / 100) * 25;
    } else if (clave == 2) {
        total -= (total / 100) * 30;
    }

    return total;
}

string Combo::str() {
    return getNombre() + "-$" + to_string(getPrecio()) + "-" + to_string(getPeso()) + "-$" + to_string(calculaTotalPagar()) + "-" + to_string(clave);
}