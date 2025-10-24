#include "../include/Libro.h"

Libro::Libro(string t, string a, string i) {
    titulo = t;
    autor = a;
    isbn = i;
    disponible = true;
}

string Libro::getTitulo() { return titulo; }
string Libro::getAutor() { return autor; }
string Libro::getISBN() { return isbn; }
bool Libro::estaDisponible() { return disponible; }
void Libro::setDisponible(bool estado) { disponible = estado; }
