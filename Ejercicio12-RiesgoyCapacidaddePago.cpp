#include <iostream>
#include <string>

using namespace std;

int main() {
    float ingresoMensual, deudaMensual;
    int edad, historialCrediticio;
    float relacionDeudaIngreso, capacidadPago;

    cout << "Ingrese el ingreso mensual: ";
    cin >> ingresoMensual;
    cout << "Ingrese la deuda mensual: ";
    cin >> deudaMensual;
    cout << "Ingrese la edad: ";
    cin >> edad;
    cout << "Tiene historial crediticio? (1 para si, 0 para no): ";
    cin >> historialCrediticio;

    if (ingresoMensual <= 0) {
        cout << "ERROR: El ingreso mensual debe ser mayor que cero." << "\n";
    } 
    else if (deudaMensual < 0) {
        cout << "ERROR: La deuda mensual no puede ser negativa." << "\n";
    } 
    else if (edad < 18 || edad > 100) {
        cout << "ERROR: La edad debe estar entre 18 y 100 anos." << "\n";
    } 
    else if (historialCrediticio != 0 && historialCrediticio != 1) {
        cout << "ERROR: El historial crediticio debe ser 1 o 0." << "\n";
    } 
    else {
        relacionDeudaIngreso = deudaMensual / ingresoMensual;
        capacidadPago = ingresoMensual - deudaMensual;

        cout << "Relacion deuda/ingreso: " << relacionDeudaIngreso << "\n";
        cout << "Capacidad de pago: $" << capacidadPago << "\n";

        if (relacionDeudaIngreso > 0.5 || capacidadPago < 0) {
            cout << "Nivel de riesgo: Alto" << "\n";
        } 
        else if (relacionDeudaIngreso <= 0.3 && edad >= 25 && historialCrediticio == 1) {
            cout << "Nivel de riesgo: Bajo" << "\n";
        } 
        else {
            cout << "Nivel de riesgo: Medio" << "\n";
        }
    }

    return 0;
}