#include <iostream>
#include <vector>

using namespace std;

int main() {
    // for baseado em intervalos
    vector<int> num{2, 4, 6, 8};

    for (int i:num) {
        cout << i << endl;
    }

    // lambda functions
    auto soma = [](int n1, int n2)->int {
        return n1+n2;
    };
    cout << "soma : " << soma(3,2) << endl;

    int x1 = 10, x2 = 20, x3 = 30;
    auto somaTripla = [x1, x2, x3]()->int {
        return x1+x2+x3;
    };
    cout << "soma tripla : " << somaTripla();
    return 0;
}