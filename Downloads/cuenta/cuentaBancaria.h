#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <iostream>
#include <string>

using namespace std;
class CuentaBancaria {
private:
    string nombre;  // Atributo de la clase
    double saldo;   // Atributo de la clase

public:
    // Método para establecer el nombre de la cuenta
    void setNombre(string n) {
        nombre = n;
    }

    // Método para obtener el nombre de la cuenta
    string getNombre() {
        return nombre;
    }

    // Método para establecer el saldo de la cuenta
    void setSaldo(double s) {
        saldo = s;
    }

    // Método para obtener el saldo de la cuenta
    double getSaldo() {
        return saldo;
    }

    // Método para depositar dinero en la cuenta
    void deposita(double cantidad) {
        saldo += cantidad;
        cout << "Depósito exitoso. Nuevo saldo: " << saldo << " USD" << endl;
    }

    // Método para retirar dinero de la cuenta
    bool retira(double cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
            return true; // Retiro exitoso
        } else {
            cout << "Fondos insuficientes para realizar el retiro.\n";
            return false; // Fondos insuficientes
        }
    }


    // Método para mostrar los detalles de la cuenta
    void muestra() {
        cout << "Nombre de la cuenta: " << nombre << endl;
        cout << "Saldo actual: " << saldo << " USD" << endl;
    }
};

#endif // CUENTABANCARIA_H
