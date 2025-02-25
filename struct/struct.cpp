#include <iostream>

using namespace std;

int main() {
    // struct
    struct carro {
        string nome;
        string cor;
        int potencia;
        // metodos
        void inserir(string snone, string scor, int spotencia) {
            nome = "gol quadrado";
            cor = "prata";
            potencia = 80;
        }
        void imprimir() {
            cout << nome << " - cor : " << cor << " - potencia(cvls) : " << potencia << endl;
        }
    };
    carro gol;
    gol.inserir("gol quadrado", "prata", 80);

    gol.imprimir();
    // arrays de struct
    carro *carros = new carro[3];
    carro car1, car2;

    carros[0] = car1;
    carros[1] = car2;
    carros[2] = gol;

    carros[2].imprimir();

    return 0;
}