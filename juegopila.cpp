#include <iostream>
#include <stack>
#include "pila.h"
using namespace std;

PilaDeDiscos::PilaDeDiscos(int nDiscos) {
    for (int i = 1; i <= nDiscos; i++) {
        pilaDiscos.push(i);
    }
}

bool PilaDeDiscos::retirarDisco(int disco) {
    if (disco == pilaDiscos.top()) {
        pilaDiscos.pop();
        return true;
    } else {
        return false;
    }
}

bool PilaDeDiscos::estaVacia() {
    return pilaDiscos.empty();
}

int main() {
    PilaDeDiscos pila(5); // Creamos una pila de 5 discos.
    int disco;

    cout << "¡Bienvenido al juego de la pila de discos!" << endl;
    cout << "Debes retirar los discos en el orden correcto, empezando por el 5." << endl;

    for (int i = 5; i >= 1; i--) {
        cout << "Por favor retira el disco: " << i << endl;
        cin >> disco;

        // Comprueba si el disco que el usuario intenta retirar es el correcto.
        if (pila.retirarDisco(disco)) {
            cout << "¡Correcto!" << endl;
        } else {
            cout << "¡Incorrecto! Ese no es el disco correcto." << endl;
            return 0;
        }
    }

    if (pila.estaVacia()) {
        cout << "¡Felicidades! Has retirado todos los discos en el orden correcto." << endl;
    }

    return 0;
}