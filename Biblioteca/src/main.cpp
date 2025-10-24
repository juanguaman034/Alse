#include <iostream>
#include "../include/Biblioteca.h"
#include "../include/Libro.h"
using namespace std;

int main() {
    Biblioteca biblio;

    Libro l1("El Principito", "Antoine de Saint-Exupéry", "001");
    Libro l2("Cien Años de Soledad", "Gabriel García Márquez", "002");
    Libro l3("La Odisea", "Homero", "003");

    biblio.agregarLibro(l1);
    biblio.agregarLibro(l2);
    biblio.agregarLibro(l3);

    biblio.mostrarLibrosDisponibles();

    biblio.eliminarLibro("002");

    biblio.mostrarLibrosDisponibles();

    return 0;
}
