#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Libro.h"
using namespace std;

class Biblioteca {
private:
    vector<Libro> libros;

public:
    void agregarLibro(Libro nuevo);
    void eliminarLibro(string isbn);
    void mostrarLibrosDisponibles();
};

#endif
