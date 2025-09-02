#include <iostream>

using namespace std;


int main() {
    auto soma = [](int n1, int n2)-> int{
        return n1 + n2;
    };

    cout << soma(3,5);
    return 0;
}