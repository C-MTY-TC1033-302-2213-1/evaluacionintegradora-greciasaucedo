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


int Combo::calculaTotalPagar(){
    int precioSinClave = precio * peso * clave;
    if (clave == 1) {
        int descuento = (precioSinClave / 100) * 25;
        return precioSinClave - descuento;
    } 
    else if (clave == 2) {
        int descuento = (precioSinClave / 100) * 30;
        return precioSinClave - descuento;
    }
    else {
        return precioSinClave;
    }
}

string Combo::str(){
    int precioFinal = calculaTotalPagar();
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(precioFinal) +
    "-" + to_string(clave);
}