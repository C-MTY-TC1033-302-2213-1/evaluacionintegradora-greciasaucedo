/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 2/junio/2024 
*/

#ifndef Combo_h
#define Combo_h

#include "Producto.h"

class Combo : public Producto {
// Atributos
private:
    int clave;

// Métodos
public:
    // Constructores
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    // Otros métodos
    int calculaTotalPagar();
    string str();

    ~Combo() {}
};

#endif /* Combo_h */