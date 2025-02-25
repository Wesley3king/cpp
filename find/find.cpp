#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main () {
    // vector
    vector <int> num{1, 3, 5, 7, 9};
    vector<int>::iterator result = find(num.begin(), num.end(), 5);
    (result != num.end()) ? cout << "achado" : cout << "nao achado";

    // map
    cout << endl;
    map<char , int> mapa{
        {'a', 10},
        {'b', 11}
    };

    auto res = mapa.find('b');
    (res != mapa.end()) ? cout << "mapa: achado" : cout << "mapa : nao achado";

    // string
    cout << endl;
    string txt  ="CFB Cursos";
    size_t txtRes = txt.find("CFB");
    (txtRes != string::npos) ? cout << "string: achado" : cout << "string : nao achado";

    return  0;
}