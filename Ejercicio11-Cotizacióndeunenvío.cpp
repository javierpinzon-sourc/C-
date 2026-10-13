#include <iostream>
#include <string>

using namespace std;

int main() {
    float peso, distancia, tarifa;
    int zona;
    char fragil;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese la distancia en kilometros: ";
    cin >> distancia;
    cout << "Ingrese la zona (1 para Nacional, 2 para Internacional): ";
    cin >> zona;
    cout << "El paquete es fragil? (S/N): ";
    cin >> fragil;

    if (peso <= 0 || distancia <= 0) {
        cout << "ERROR: El peso y la distancia deben ser mayores que cero." << "\n";
    } 
    else if (peso > 30) {
        cout << "ERROR: El peso no puede superar los 30 kg." << "\n";
    } 
    else if (zona != 1 && zona != 2) {
        cout << "ERROR: La zona debe ser 1 (Nacional) o 2 (Internacional)." << "\n";
    } 
    else if (fragil != 'S' && fragil != 's' && fragil != 'N' && fragil != 'n') {
        cout << "ERROR: La opcion de paquete fragil debe ser S, s, N o n." << "\n";
    } 
    else {
        tarifa = 8000 + (1200 * peso) + (50 * distancia);

        if (zona == 2) {
            tarifa = tarifa * 1.5;
        }

        if (fragil == 'S' || fragil == 's') {
            tarifa = tarifa * 1.20;
        }

        cout << "El valor final a pagar es: $" << tarifa << "\n";
    }

    return 0;
}