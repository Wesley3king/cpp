#include <iostream>
#include <memory>

using namespace std;

class Veiculo {
    public:
    string name;
    int potencia;
    // polimorfismo (sobrecarga de metodos)

    //veiculo padrao
    Veiculo() {
        this->name = "Utlilitario padrao";
        this->potencia = 60;
        setVelMax(60);
    }
    //configurar o veiculo
    Veiculo(const char* nome, int p):name(nome), potencia(p) {
        setVelMax(p);
    }

    int getVelMax() {
        return velMax;
    }
    void setVelMax(int p) {
        (p < 100) ? velMax = 160 : velMax = 200;
    }

    // virtual
    virtual void imp() {
        cout << "---- nome : " << this->name << endl;
        cout << "---- ano : " << this->ano << endl;
    }
    private:
    //encapsulamento
    int velMax;
    // void setVelMax(int p) {
    //     (p < 100) ? velMax = 160 : velMax = 200;
    // }
    protected:
    int ano;
};

class Carro:public Veiculo {
    public:
    Carro() {
        name = "Utlilitario padrao";
        potencia = 60;
        setVelMax(60);
        ano = 2010;
    }
    //configurar o veiculo
    Carro(const char* nome, int p, int ano){
        name = nome;
        potencia = p;
        setVelMax(p);
        ano = ano;
    }

    // override
    void imp() override {
        cout << "---- potencia : " << this->potencia << endl;
        cout << "---- ano : " << this->ano << endl;
    }
    private:
    int velMax;
    void setVelMax(int p) {
        (p < 100) ? velMax = 160 : velMax = 200;
    }
};

int main() {
    Carro c1{"gol", 60, 2001};

    cout << "nome : " << c1.name << " velocidade max. : " << c1.getVelMax();
    // com smart pointer
    unique_ptr<Carro>c2(new Carro("corsa", 80, 2009));
    cout << "\nnome : " << c2->name << " velocidade max. : " << c2->getVelMax();

    // polimorfismo
    unique_ptr<Carro>c3(new Carro());
    cout << "\nnome : " << c3->name << " velocidade max. : " << c3->getVelMax();

    // herança virtual e override
    c3->imp();
    // protected
    //c3.ano // nao pode ser acessado por fora da classe
    return 0;
}