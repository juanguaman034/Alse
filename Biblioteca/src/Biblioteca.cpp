#include "../include/Biblioteca.h"
#include <iostream>
using namespace std;

void Biblioteca::agregarLibro(Libro nuevo) {
    libros.push_back(nuevo);
    cout << "Libro agregado correctamente.\n";
}

void Biblioteca::eliminarLibro(string isbn) {
    for (int i = 0; i < libros.size(); i++) {
        if (libros[i].getISBN() == isbn) {
            libros.erase(libros.begin() + i);
            cout << "Libro eliminado.\n";
            return;
        }
    }
    cout << "No se encontro el libro.\n";
}

void Biblioteca::mostrarLibrosDisponibles() {
    cout << "\n--- Libros Disponibles ---\n";
    for (int i = 0; i < libros.size(); i++) {
        if (libros[i].estaDisponible()) {
            cout << "Titulo: " << libros[i].getTitulo() << endl;
            cout << "Autor: " << libros[i].getAutor() << endl;
            cout << "ISBN: " << libros[i].getISBN() << endl;
            cout << "------------------------\n";
        }
    }
}
