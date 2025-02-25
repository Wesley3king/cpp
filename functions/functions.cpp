#include <iostream>
using namespace std;

void soma(int values[2]);
void soma(int n1, int n2);
void imprimir(string texto = "texto default");
void contadorRecursivo(int max, int count = 0);

int main(int argc, char *argv[]) {
    // argc e argv
    cout << "argc : " << argc << " argv : " << argv[0] << endl;

    // functions e sobrecarga de funcoes
    int values[2] = {5, 7};
    soma(values);
    soma(10, 200);

    // omissao de argumentos
    imprimir();
    // recursividade
    contadorRecursivo(8);

    //

}

void soma(int values[2]) {
    cout << "soma 1 :" << values[0] + values[1] << endl;
}

void soma(int n1, int n2) {
    cout << "soma 2 : " << n1 + n2;
}

void imprimir(string texto) {
    cout << endl << texto << endl;
}

void contadorRecursivo(int max, int count) {
    cout << count << endl;
    if(count != max) {
        contadorRecursivo(max, count+1);
    }
}
