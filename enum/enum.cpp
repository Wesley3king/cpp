#include <iostream>
using namespace std;

int main() {
    // o valor do enum é sequencial ou seja o valor revolver vai ser 3 e da espingarda 4.
    enum armas{rifle = 2, revolver, espingarda};
    armas armaSelecionada;
    armaSelecionada = revolver;
    cout << "arma selecionada : " << armaSelecionada;

    return 0;
}