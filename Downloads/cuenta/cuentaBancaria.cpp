#include <iostream>
#include <string>
#include "cuentaBancaria.h"
using namespace std;



int main() {
    CuentaBancaria miCuenta;  // Crear un objeto de la clase CuentaBancaria
    string nombre = "";
    double saldo = 0.0;
    double cantidad = 0.0;

    cout << "Ingresa el nombre de la cuenta: ";
    cin >> nombre;
    miCuenta.setNombre(nombre);

    cout << "Ingresa el saldo inicial de la cuenta: ";
    cin >> saldo;
    miCuenta.setSaldo(saldo);

    miCuenta.muestra();  // Mostrar detalles iniciales de la cuenta

    // Realizar operaciones de depósito y retiro
    cout << "Ingresa la cantidad a depositar: ";
    cin >> cantidad;
    miCuenta.deposita(cantidad);

    cout << "Ingresa la cantidad a retirar: ";
    cin >> cantidad;
    
    if (miCuenta.retira(cantidad)) {
        cout << "Retiro exitoso. Nuevo saldo: "<<miCuenta.getSaldo()<<"\n";
    } else {
        cout << "No se pudo realizar el retiro.\n";
    }

    // Mostrar detalles finales de la cuenta
    miCuenta.muestra();

    return 0;
}
