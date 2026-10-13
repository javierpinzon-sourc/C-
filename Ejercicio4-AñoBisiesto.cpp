#include <iostream>
#include <string>

using namespace std;

int main() {
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio <= 0) {
        cout << "ERROR: El anio debe ser positivo." << "\n";
    } 
    else {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            cout << anio << " es bisiesto." << "\n";
        } 
        else {
            cout << anio << " no es bisiesto." << "\n";
        }
    }

    return 0;
}