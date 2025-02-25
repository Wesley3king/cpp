#ifndef NOTA_H_INCLUDED
#define NOTA_H_INCLUDED

class Nota {
    public:
    std::string txt;
    Nota(std::string n) {
        this->txt = n;
        setTitulo("");
    };
    void imprimir() {
        std::cout << getTitulo() << std::endl;
        std::cout << this->txt;
    }
    // get
    std::string getTitulo() { return titulo; }
     // set
    void setTitulo(std::string t) {
        titulo = t;
    }

    private:
    std::string titulo;

};
// Nota::

// heranca
class Nota2 {
    public:
    std::string txt;
    void init(std::string n) {
        this->txt = n;
        setTitulo("");
    };
    // get
    std::string getTitulo() { return titulo; }
     // set
    void setTitulo(std::string t) {
        titulo = t;
    }

    private:
    std::string titulo;
};


class NotaPost:public Nota2 {
    public:
    std::string writter = "";
    void imprimir() {
        std::cout << getTitulo() << std::endl;
        std::cout << this->txt << "  -  " << this->writter;
    }   
};

// herança multipla
class MultiplaNota:public Nota, public Nota2 {};

#endif // NOTA_H