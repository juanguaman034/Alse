#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string columnTitle;
    long long result = 0; 

    cout << "Ingresa el titulo de la columna (por ejemplo: A, AB, ZY): ";
    cin >> columnTitle;

    for (int i = 0; i < columnTitle.length(); i++) {
        char letra = columnTitle[i];

        int valor = letra - 'A' + 1;

        result = result * 26 + valor;
    }
    cout << "El numero de columna correspondiente es: " << result << endl;

    return 0;
}
