/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 6/junio/2024 
*/

#ifndef Verdura_h
#define Verdura_h

#include <stdio.h>
#include <string>
#include "Producto.h"
using namespace std;

class Verdura : public Producto {
    // Atributos 
    private:
        string temporada;

    public:
        Verdura();
        Verdura(string _nombre, int _precio, int _peso, string _temporada);

    // Otros métodos
        string str();
        int calculaTotalPagar();

};

#endif /* Verdura_h */