#include <iostream>
using namespace std;

int main() {
    // while
    int numberwhile = 0;
    while (!(numberwhile < 5)) {
        ++numberwhile;
        cout << numberwhile;
    }

    // do while
    do {
        cout << numberwhile << endl;
        numberwhile++;
    } while (numberwhile < 5);

    // for
    int numberFor;
    int numb2;
    for (numberFor = 0, numb2 = 2; numberFor < 4; numberFor++, numb2 +=2 ) {
        cout << "numberFor : " << numberFor << "    - numb2 : " << numb2 << endl;
    }
    return 0;
}