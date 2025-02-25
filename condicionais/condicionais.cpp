#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    // condicionais e goto
    int trie = 1;
    inicio:

    int numberTrue;
    cout << trie << " - numero true ou falso [0,1] : ";
    cin >> numberTrue;

    if(numberTrue == 0 || numberTrue == 1) {
        if (numberTrue) {
            trie++;
            goto inicio;
        }
    }
    cout << "programa finalizado";

    // and or not e operador ternario
    int num1 = 0;
    int num2 =  1;
    string result;
    result = !num1 ? "verdadeiro" : "falso";
    cout << endl << result << endl;

    //switch case
    int number = 2;
    switch (number) {
        case 1:
            cout << "one";
        break;
        case 2:
            cout << "two";
        break;
        default:
            cout << "default";
    }

    return 0;
}
