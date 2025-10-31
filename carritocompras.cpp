#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Producto {
public:
    string nombre;
    double precio;
    int stock;

    Producto(string n, double p, int s) {
        nombre = n;
        precio = p;
        stock = s;
    }
};


class ItemCarrito {
public:
    Producto producto;
    int cantidad;

    ItemCarrito(Producto p, int c) : producto(p), cantidad(c) {}

    double subtotal() {
        return producto.precio * cantidad;
    }
};


class CarritoCompras {
public:
    vector<ItemCarrito> items;

    void agregarProducto(Producto p, int cantidad) {
        if (cantidad <= p.stock) {
            items.push_back(ItemCarrito(p, cantidad));
            cout << " Producto agregado al carrito.\n";
        } else {
            cout << " No hay suficiente stock.\n";
        }
    }

    void eliminarProducto(string nombre) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i].producto.nombre == nombre) {
                items.erase(items.begin() + i);
                cout << " Producto eliminado.\n";
                return;
            }
        }
        cout << " Producto no encontrado.\n";
    }

    double total() {
        double suma = 0;
        for (int i = 0; i < items.size(); i++) {
            suma += items[i].subtotal();
        }
        return suma;
    }

    void mostrarCarrito() {
        cout << "\n Carrito:\n";
        for (int i = 0; i < items.size(); i++) {
            cout << "- " << items[i].producto.nombre
                 << " x" << items[i].cantidad
                 << " = $" << items[i].subtotal() << endl;
        }
        cout << "Total: $" << total() << "\n";
    }
};


class Usuario {
public:
    string nombre;
    CarritoCompras carrito;

    Usuario(string n) {
        nombre = n;
    }

    void comprar() {
        cout << "\n Compra finalizada por $" << carrito.total() << endl;
        carrito.items.clear();
    }
};


int main() {
    Producto p1("Laptop", 2500, 5);
    Producto p2("Mouse", 80, 10);
    Producto p3("Teclado", 150, 8);


    Usuario u("Juan");

    u.carrito.agregarProducto(p1, 1);
    u.carrito.agregarProducto(p2, 2);
    u.carrito.mostrarCarrito();

    u.carrito.eliminarProducto("Mouse");
    u.carrito.mostrarCarrito();

    u.comprar();

    return 0;
}
