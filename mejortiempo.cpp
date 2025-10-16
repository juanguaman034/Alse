#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos dias vas a ingresar?: ";
    cin >> n;

    int prices[n];

    cout << "Ingresa los precios de las acciones: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int minPrecio = prices[0];  
    int maxGanancia = 0;        
    
    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrecio) {
            minPrecio = prices[i];
        }

        int gananciaActual = prices[i] - minPrecio;

        if (gananciaActual > maxGanancia) {
            maxGanancia = gananciaActual;
        }
    }

    cout << "La ganancia maxima posible es: " << maxGanancia << endl;

    return 0;
}