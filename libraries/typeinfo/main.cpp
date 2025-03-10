#include <iostream>
#include <typeinfo>

using namespace std;

int main () {
    auto v = 10.1;
    cout << "tipo de v: " << typeid(v).name();
    return 0;
}