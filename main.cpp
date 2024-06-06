/*
Nombre: Grecia Klarissa Saucedo Sandoval 
Matricula: A00839374
Carrera: ITC
Fecha: 2/junio/2024 
*/
#include <iostream>
#include "Pedido.h"

int main() {
    
    Pedido pedido;
    int opcion;
    
    cin >> opcion;
    
    switch (opcion) {
        case 1:
            pedido.leerArchivo("Pedido1.csv");
            break;
        case 2:
            pedido.leerArchivo("Pedido2.csv");
            break;
        case 3:
            pedido.leerArchivo("Pedido3.csv");
            break;
        case 4:
            pedido.leerArchivo("Pedido4.csv");
            break;
        default:
            break;
    }
 
    pedido.ticketCliente();
    
    return 0;
}
