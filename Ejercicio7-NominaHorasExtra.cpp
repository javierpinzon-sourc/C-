#include <iostream>
#include <string>

using namespace std;

int main() {
    float valorHora, horasTrabajadas;
    float horasNormales = 0, horasExtra = 0, horasDobles = 0;
    float salarioBruto = 0, descuento = 0, salarioNeto = 0;

    cout << "Ingrese el valor de la hora: ";
    cin >> valorHora;
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;

    if (valorHora <= 0 || horasTrabajadas < 0) {
        cout << "ERROR: El valor de la hora debe ser positivo y las horas no pueden ser negativas." << "\n";
    } 
    else {
        if (horasTrabajadas <= 40) {
            horasNormales = horasTrabajadas;
        } 
        else if (horasTrabajadas <= 48) {
            horasNormales = 40;
            horasExtra = horasTrabajadas - 40;
        } 
        else {
            horasNormales = 40;
            horasExtra = 8;
            horasDobles = horasTrabajadas - 48;
        }

        salarioBruto = (horasNormales * valorHora) + (horasExtra * valorHora * 1.5) + (horasDobles * valorHora * 2.0);

        if (salarioBruto > 2000000) {
            descuento = salarioBruto * 0.08;
        } 
        else {
            descuento = salarioBruto * 0.04;
        }

        salarioNeto = salarioBruto - descuento;

        cout << "Horas normales: " << horasNormales << "\n";
        cout << "Horas extra (1.5x): " << horasExtra << "\n";
        cout << "Horas dobles (2.0x): " << horasDobles << "\n";
        cout << "Salario bruto: " << salarioBruto << "\n";
        cout << "Valor del descuento: " << descuento << "\n";
        cout << "Salario neto: " << salarioNeto << "\n";
    }

    return 0;
}