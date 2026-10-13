#include<iostream>
#include<string>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;

    cout << "Ingrese la primera nota (0.0 a 5.0): ";
    cin >> nota1;
    cout << "Ingrese la segunda nota (0.0 a 5.0): ";
    cin >> nota2;
    cout << "Ingrese la tercera nota (0.0 a 5.0): ";
    cin >> nota3;

    if (nota1 < 0.0 || nota1 > 5.0 || nota2 < 0.0 || nota2 > 5.0 || nota3 < 0.0 || nota3 > 5.0) {
        cout << "ERROR: las notas deben estar entre 0.0 y 5.0." << "\n";
    } 
    else {
        promedio = (nota1 * 0.30) + (nota2 * 0.30) + (nota3 * 0.40);
        cout << "El promedio final es: " << promedio << "\n";

        if (promedio >= 4.5) {
            cout << "Concepto: Excelente" << "\n";
        } 
        else if (promedio >= 4.0) {
            cout << "Concepto: Bueno" << "\n";
        } 
        else if (promedio >= 3.0) {
            cout << "Concepto: Aceptable" << "\n";
        } 
        else {
            cout << "Concepto: Reprobado" << "\n";
        }
    }

    return 0;
}