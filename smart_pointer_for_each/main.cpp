#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

int main () {
    // smart pointer
    unique_ptr<int> p1(new int(10));
    cout << "p1 : " << *p1;

    shared_ptr<int>p2(new int(20));
    shared_ptr<int> p3 = p2;
    cout << "\np3 : " << *p3;

    // for each
    vector<int> numeros{1, 2, 3, 4, 5};

    for_each(numeros.begin(), numeros.end(), [] (int num) {
        cout << "\n numero : " << num;
    });
    return 0;
}