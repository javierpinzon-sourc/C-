#include <iostream>
#include <string>

using namespace std;

int main() {
    float a, b, c;
    float discriminante, x;

    cout << "Ingrese el coeficiente a: ";
    cin >> a;
    cout << "Ingrese el coeficiente b: ";
    cin >> b;
    cout << "Ingrese el coeficiente c: ";
    cin >> c;

    if (a == 0 && b == 0) {
        cout << "No es una ecuacion de primer ni de segundo grado." << "\n";
    } 
    else if (a == 0) {
        x = -c / b;
        cout << "Ecuacion lineal. El valor de x es: " << x << "\n";
    } 
    else {
        discriminante = (b * b) - (4 * a * c);

        if (discriminante > 0) {
            cout << "Dos raices reales: (" << -b << " + sqrt(" << discriminante << ")) / " << (2 * a) 
                 << " y (" << -b << " - sqrt(" << discriminante << ")) / " << (2 * a) << "\n";
        } 
        else if (discriminante == 0) {
            x = -b / (2 * a);
            cout << "Unica raiz real: x = " << x << "\n";
        } 
        else {
            cout << "Las raices son complejas." << "\n";
        }
    }

    return 0;
}