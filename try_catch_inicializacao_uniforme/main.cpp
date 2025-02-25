#include <iostream>
#include <vector>
#include <stdexcept>
#include <map>

using namespace std;
exception tst;

int main() {
    // try catch
    try{
        throw tst;
    }catch(const exception& e) {
        cout << "ERROR : " << e.what();
    }

    // inicializacao uniforme
    int num[]{1, 3, 5};
    string txt{"kenji"};
    vector<int> numbers{1, 2, 3, 4, 5, 6};
    map<string, string> estados{
        {"parana", "curitiba"}
    };
    // lendo com iterator
    for(vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << endl;
    }
    for(map<string, string>::iterator it = estados.begin(); it != estados.end(); ++it) {
        cout << it->first << " - " << it->second;
    }
    // iterator
    vector<int>::iterator ite;
    ite = numbers.begin();

    advance(ite, 1);
    prev(ite, 1); // este nao salva no original
    next(ite, 2); // este nao salva no original

    cout << "\niterartor : " << *ite;
    return 0;
}
