#include <iostream>

using namespace std;

class Aviao {
    public:
    string name;
    int vel;
    void insert(string n, int v) {
        this->name = n;
        this->vel = v;
    };
    private:

};

// void Aviao::insert(string n, int v) {
    
// }

int main() {
    Aviao *av1 = new Aviao();

    av1->insert("boeing 777", 500);

    cout << "nome : " << av1->name << " velocidade : " << av1->vel;
    return 0;
}