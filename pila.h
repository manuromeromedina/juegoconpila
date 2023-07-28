#ifndef PILA_DE_DISCOS_H
#define PILA_DE_DISCOS_H

#include <stack>

class PilaDeDiscos {
private:
    std::stack<int> pilaDiscos;
public:
    PilaDeDiscos(int nDiscos);
    bool retirarDisco(int disco);
    bool estaVacia();
};

#endif
