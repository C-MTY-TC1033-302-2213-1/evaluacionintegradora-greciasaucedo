/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 6/junio/2024 
*/

#include "Verdura.h"
#include <sstream>

// Constructores
Verdura::Verdura() : Producto() {
    temporada = "";
}
Verdura::Verdura(string _nombre, int _precio, int _peso, string _temporada) 
    : Producto(_nombre, _precio, _peso), temporada(_temporada) {}

// Método para convertir a string la información de la verdura
string Verdura::str(){
    int precioFinal = calculaTotalPagar();
    return nombre + "-$" + to_string(precio) + "-" + to_string(peso) + "-$" + to_string(precioFinal) +
    "-" + temporada;
}

// Método para calcular el total a pagar
int Verdura::calculaTotalPagar(){
    if (temporada == "Junio") {
        return precio * peso * 2;
    }
    else if (temporada == "Regalado") {
        return precio * peso * 3;
    }
    else {
        return precio * peso * 10;
    }
}
