#include <iostream>
#include <string>

using namespace std;

int main() {
    float saldo, monto;
    int opcion;

    cout << "Ingrese el saldo inicial: ";
    cin >> saldo;

    if (saldo < 0) {
        cout << "ERROR: El saldo inicial no puede ser negativo." << "\n";
    } 
    else {
        cout << "--- MENU ---" << "\n";
        cout << "1. Consultar saldo" << "\n";
        cout << "2. Retirar" << "\n";
        cout << "3. Consignar" << "\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Su saldo actual es: $" << saldo << "\n";
        } 
        else if (opcion == 2) {
            cout << "Ingrese el monto a retirar: ";
            cin >> monto;

            if (monto <= 0) {
                cout << "ERROR: El monto a retirar debe ser mayor que cero." << "\n";
            } 
            else if (monto > saldo) {
                cout << "ERROR: Saldo insuficiente. No puede retirar mas de $" << saldo << "\n";
            } 
            else {
                saldo = saldo - monto;
                cout << "Retiro exitoso. Nuevo saldo: $" << saldo << "\n";
            }
        } 
        else if (opcion == 3) {
            cout << "Ingrese el monto a consignar: ";
            cin >> monto;

            if (monto <= 0) {
                cout << "ERROR: El monto a consignar debe ser mayor que cero." << "\n";
            } 
            else {
                saldo = saldo + monto;
                cout << "Consignacion exitosa. Nuevo saldo: $" << saldo << "\n";
            }
        } 
        else {
            cout << "ERROR: Opcion no valida." << "\n";
        }
    }

    return 0;
}