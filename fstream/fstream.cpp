#include <iostream>
#include <fstream>

using namespace std;

int main () {
    // ofstream
    ofstream file;
    file.open("teste.txt",ios::app);//ios::app -> concatena a string em vez de sobrescrever.
    file << "\nCANAL CFB CURSOS (4)";
    file.close();

    // ifstream
    ifstream arquivo;
    string txt;
    arquivo.open("teste.txt");
    if (arquivo.is_open()) {
        while(getline(arquivo, txt)) cout << txt << endl;
    } else cout << "Arquivo nao encontrado!";
    arquivo.close();

    // fstream - write
    fstream archive;
    archive.open("fstream.txt",ios::out | ios::app);
    archive << "HELLO WORLD! (0)\n";
    archive.close();
    // read
    string readString;
    archive.open("fstream.txt", ios::in);
    if (archive.is_open()) {
        while(getline(archive, readString)) cout << readString << endl;
    } else cout << "Arquivo nao encontrado!";
    archive.close();
    cout << "       EXECUTADO!";
    return 0;
}