#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack <string> cores;
    cores.push("yellow");
    cores.push("red");
    cores.push("green");
    cout << "quantidade da pilha : " << cores.size() << endl;
    cores.pop();
    cout << "quantidade da pilha : " << cores.size() << endl;
    cout << "ultimo elemento na pilha : " << cores.top() << endl;
    string isEmpty = cores.empty() ? "a pilha esta vazia" : "a pilha nao esta vazia";
    cout << isEmpty;

    return 0;
}
