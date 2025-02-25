#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> num, test;
    num.push_front(1);
    num.push_back(2);
    num.push_front(3);
    cout << "quantidade da fila : " << num.size() << endl;
    
    cout << "ultimo elemento na fila : " << num.front() << endl;
    cout << "primeiro elemento na fila : " << num.back() << endl;

    // insert
    list<int>::iterator it;
    it = num.begin();
    advance(it, 1);
    num.insert(it, 8);

    // while (!num.empty()) {
    //     cout << num.front() << endl;
    //     num.pop_front();
    //     //num.pop_back();
    // }
    // erase
    advance(it, 2);
    num.erase(--it);

    while (!num.empty()) {
        cout << num.front() << endl;
        num.pop_front();
        //num.pop_back();
    }
    // merge
    test.push_front(7);
    test.push_back(7);
    test.push_front(7);
    num.merge(test);
    cout << "\nfront positiom : " << num.front() << endl;
    num.clear();
    string isEmpty = num.empty() ? "a fila esta vazia\n" : "a fila nao esta vazia\n";
    cout << isEmpty;

    return 0;
}