#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    //cout << "hello word again!";

    //      conversoes
    double d = atof("2.2");
    int i = atoi("5");
    
    // random numbers
    srand(NULL);
    int num = rand()%100;
    cout << "numero :" << num;
    return 0;
}
