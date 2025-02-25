#include <iostream>
#include "Nota.h"

using namespace std;

int main() {
    Nota *nota = new Nota("CFB CURSOS");
    nota->setTitulo("canal do youtube");
    nota->imprimir();

    // herança
    NotaPost *post = new NotaPost();
    post->init("Cfb");
    post->writter = "You Tube";
    post->imprimir();
    return 0;
}