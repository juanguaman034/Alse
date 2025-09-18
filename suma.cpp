#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    double p;
    string r="si";

    while(r=="si"){
        double f=0.0;
        cout <<"Desea calcular el costo total de su compra (si/no)"<< endl;
        cin>> r;
        if (r=="si"){
            cout << "Ingrese el numero de Articulos " << endl;
            cin >> a;
            for (int i=1;i<=a;i++){
                cout << "Precio del Articulo "<< i << endl;
                cin >> p;
                f+=p;
            }
            cout << "El precio final de su compra es de "<< f << endl;
        }else{
            cout<<"Tenga un feliz dia"<< endl;
        }
    }




    return 0;
}