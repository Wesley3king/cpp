#include <iostream>
using namespace std;

void adicionaValor(int *var, int valor);
void inserir(int *var, int value);

int main () {
    string texto = "CFB cursos";
    string *tp = &texto;
    cout << "endereço : " << tp << endl;
    cout << "valor : " << *tp << endl;
    // array com ponteiros
    int numeros[4];
    int *pn;
    pn = numeros;
    *pn = 10;

    *(pn += 1);
    *pn = 20;
    // numeros[1] = 30;
    cout << endl << *pn;

    // functions e ponteiros
    int valor;
    // int *pv;
    inserir(&valor, 11);
    cout << "\n valor : " << valor << endl;
    adicionaValor(numeros, 40);
    *(pn += 1);
    cout << endl << *pn;
    return 0;
}

void inserir(int *var, int value) {
    *var = value;
}

void adicionaValor(int *var, int valor) {
    var[2] = valor;
}