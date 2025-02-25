#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> produtos;

    produtos.insert(pair<int, string>(0, "couve"));
    produtos.insert(pair<int, string>(1, "salsa"));
    produtos.insert(pair<int, string>(2, "batata"));
    produtos.insert(pair<int, string>(3, "maca"));

    // find
    map<int, string>::iterator key = produtos.find(2);
    (!(key == produtos.end())) ? cout << "\nACHADO\n" : cout << "\nNAO ACHADO\n";

    // erase
    produtos.erase(1);// deleta coma a chave
    produtos.erase(produtos.find(2), produtos.find(3));


    for (auto i:produtos) {
        cout << i.first << " - " << i.second << endl;
    }

    cout << "\ntamanho do map : " << produtos.size();
    return 0;
}