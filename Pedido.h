/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 2/junio/2024 
*/
#ifndef Pedido_h
#define Pedido_h
#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include "Verdura.h"
#include "Producto.h"
#include "Combo.h"

using namespace std;

const int MAX_PROD = 50;

class Pedido {
// Atributos 
private:
    Producto* arrPtrProductos[MAX_PROD];
    int cantidad;

public:
    // Constructores 
    Pedido ();
    ~Pedido();

// Otros métodos 
    void leerArchivo (string _nombre);
    void ticketCliente() const;

};
#endif /* Pedido_h */