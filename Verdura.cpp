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
string Verdura::str() {
    stringstream ss;
    ss << "Nombre: " << nombre << "\n"
       << "Precio: " << precio << "\n"
       << "Peso: " << peso << "\n"
       << "Temporada: " << temporada << "\n";
    return ss.str();
}

// Método para calcular el total a pagar
int Verdura::calculaTotalPagar() {
    return precio * peso;
}

