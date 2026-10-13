#include <iostream>
#include <string>

using namespace std;

int main() {
    float peso, estatura, imc;

    cout << "Ingrese el peso en kilogramos: ";
    cin >> peso;
    cout << "Ingrese la estatura en metros: ";
    cin >> estatura;

    if (peso <= 0.0 || estatura <= 0.0) {
        cout << "ERROR: El peso y la estatura deben ser mayores que cero." << "\n";
    } 
    else {
        imc = peso / (estatura * estatura);
        cout << "Su IMC es: " << imc << "\n";

        if (imc < 18.5) {
            cout << "Clasificacion: Bajo peso" << "\n";
        } 
        else if (imc < 25.0) {
            cout << "Clasificacion: Normal" << "\n";
        } 
        else if (imc < 30.0) {
            cout << "Clasificacion: Sobrepeso" << "\n";
        } 
        else {
            cout << "Clasificacion: Obesidad" << "\n";
        }
    }

    return 0;
}