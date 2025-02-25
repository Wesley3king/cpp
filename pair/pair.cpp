#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main() {
    pair <int, string> par(1, "assis");
    cout << par.first << " - " << par.second << endl;

    vector<pair<int, string>> lista;
    lista.push_back(make_pair(2, "limao"));
    lista.push_back(make_pair(3, "laranja"));
    for (auto i:lista) {
        cout << i.first << " - " << i.second << endl;
    }
    return 0;
}