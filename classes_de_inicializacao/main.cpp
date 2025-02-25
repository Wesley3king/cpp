#include <iostream>
#include "tst.h"
#include "aux.cpp"

using namespace std;

void imprimir();
// extern
void imprimirValor();
int valor = 10;

int main () {
    // auto
    auto variavel{10};
    auto lista = {1, 3, 6};

    // register
    for (register auto i = 0; i < 10; ++i) {
        cout << i << endl;
    }

    // static
    imprimir();
    imprimir();
    imprimir();

    // extern
    imprimirValor();
    cout << endl << numero;
    return 0;
}

void imprimir() {
    static int num = 30;
    cout << num << endl;
    ++num;
}