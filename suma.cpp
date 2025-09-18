#include<iostream>
using namespace std;

int main() {
    int a;
    double p;
    double f;


    cout << "Ingrese el numero de Articulos" << endl;
    cin >> a;
    for (int i=1;i<=a;i++){
        cout << "Precio del Articulo"<< i << endl;
        cin >> p;
        f+=p;
    }
    cout << "El precio final de su compra es de "<< f << endl;


    return 0;
}