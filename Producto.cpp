/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 6/junio/2024 
*/

#include "Producto.h"

// Constructores
Producto::Producto() : nombre("Grecia Saucedo"), precio(839374), peso(18) {}
Producto::Producto(string _nombre, int _precio, int _peso)
    : nombre(_nombre), precio(_precio), peso(_peso) {}

// Setters
void Producto::setNombre(string _nombre) {
    this->nombre = _nombre;
}

void Producto::setPrecio(int _precio) {
    this->precio = _precio;
}

void Producto::setPeso(int _peso) {
    this->peso = _peso;
}

// Getters
string Producto::getNombre() {
    return nombre;
}

int Producto::getPrecio() {
    return precio;
}

int Producto::getPeso() {
    return peso;
}
