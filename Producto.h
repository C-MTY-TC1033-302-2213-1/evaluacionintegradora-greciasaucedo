/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 6/junio/2024 
*/

#ifndef Producto_h
#define Producto_h

#include <string>
#include <sstream>

using namespace std;

class Producto {
// Atributos
protected:
    string nombre;
    int precio;
    int peso;

// Métodos
public:
    // Constructores
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    // Setters
    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);

    // Getters
    string getNombre();
    int getPrecio();
    int getPeso();

    // Otros métodos
    virtual string str();
    virtual int calculaTotalPagar();
};

#endif // Producto_h