#include <iostream>
# include <vector>

using namespace std;

int main() {
    vector<int> num;

    num.push_back(3);
    num.push_back(5);

    num.insert(num.begin(), 4);

    cout << num.back() << endl;
    cout << num.front() << endl;
    cout << num.at(1) << endl;
    cout << "count : " << num.size() << endl;

    vector<int> num2 = {7 , 8 , 9};

    num.swap(num2);
    cout << num.front() << endl;
    // delete
    num.erase(num.begin());
    cout << num.front() << endl;

    cout << num.back() << endl;
    num.pop_back();
    cout << num.back() << endl;

    num.clear(); // limpa tudo do vector

    return 0;
}