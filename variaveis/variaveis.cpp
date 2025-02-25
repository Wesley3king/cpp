#include <iostream>
using namespace std;

#define imprimeCanal cout << "\n    CFB Cursos\n";

int main(){
    // idade e inserçao de dados pelo terminal
    int age;
    cout << "insira sua idade: ";
    cin >> age;
    cout << "sua idade é " << age << " anos.";

    // teste
    char letter = 'bd';
    int numb = 25188; // é diferente
    cout << "\n letra : " << letter << "|  tst: " << numb;

    //multiplas variaveis
    string user = "king", brawler = "kenji";
    cout << "\n" << user << " seu brawler favorito é " << brawler;

    // constantes
    #define valor 90
    imprimeCanal
    cout << valor << endl;

    // operadores matematicos
    int valor1 = 6, valor2 = 15;
    cout << "soma : " << valor1 + valor2 << endl;
    cout << "subtraçao : " << valor1 - valor2 << endl;
    cout << "multiplicaçao : " << valor1 * valor2 << endl;
    cout << "divisao : " << valor1 / valor2 << endl;
    cout << "resto de divisao(%) : " << valor1 % valor2 << endl;

    // operadores decremento e incremento
    int numero = 10;
    numero += 1;
    numero -= 1;
    numero *= 1;
    numero /= 1;
    numero %= 1;

    numero++;
    numero--;

    cout << ++numero << endl;

    // inverter o valor de variaveis
    int position = 5;
    position = position * -1;
    position *= -1;
    position =- position;
    cout << "your position is : " << position << endl;
    return 0;
}