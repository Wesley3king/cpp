#include <iostream>
#include <cstdlib>
using namespace std;

void imprimeWin() {
    system("clear");
    cout << "\n----------------------------------------------------------------\n";
    cout << "                           YOU WIN\n";
    cout << "\n----------------------------------------------------------------";
}

void imprime(int life) {
    switch (life) {
    case 6:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        cout << "          |" << endl;
        cout << "       ---|---" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "         | |" << endl;
        cout << "         | |" << endl;
        break;
    
    case 5:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        cout << "          |" << endl;
        cout << "          |---" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "         | |" << endl;
        cout << "         | |" << endl;
        break;
    case 4:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "         | |" << endl;
        cout << "         | |" << endl;
        break;
    case 3:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "           |" << endl;
        cout << "           |" << endl;
        break;
    case 2:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        cout << "          |" << endl;
        break;
    case 1:
        cout << "       -----" << endl;
        cout << "       |    |" << endl;
        cout << "       |    |" << endl;
        cout << "       ------" << endl;
        break;
    case 0:
        cout << "  --------" << endl;
        cout << "  |       |" << endl;
        cout << "  |   +   |" << endl;
        cout << "  |       |" << endl;
        cout << "-------------" << endl;
        cout << " YOU DIED" << endl;
    }
}

int main () {
    char palavra[2][6] = {{'b','a','t','a','t','a'}, {'*','*','*','*','*','*'}};
    string tip = "tuberculo";
    int life = 6;
    bool isLive = true;
    
    // cout << sizeof(palavra) << endl;
    while (isLive) {
        char response;
        system("clear");
        cout << "       a dica é " << tip << endl;
        imprime(life);
        cout << "\n    ";
        int i;
        for ( i = 0; i < sizeof(palavra) / 2; i++) {
            cout << palavra[1][i] << " ";
        }
        cout << "\n sua resposta : ";
        cin >> response;
        int test;
        char tst = ';';
        // cout << "gggggg" << response << (response == tst) ? "t" : "f";
        int verificationD = 0;
        for ( test = 0; test < (sizeof(palavra) / 2); test++) {
            if (response == palavra[0][test]) {
                palavra[1][test] = palavra[0][test];
            } else {
                ++verificationD;
            }
        }
        if (verificationD ==(sizeof(palavra) / 2)) {
            --life;
            if (life == 1) isLive == false;
        }
        // teste
        int count, win = 0;
        for (count = 0; count < (sizeof(palavra) / 2); count++) {
            if (palavra[0][count] == palavra[1][count]) {
                win++;
            }
        }
        if (win == (sizeof(palavra) / 2)) {
            imprimeWin();
            isLive = false;
        }
        

    }

    return 0;
}
//  else if (response == tst) {
//                 isLive == false;
//             }