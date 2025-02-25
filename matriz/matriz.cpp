#include <iostream>
using namespace std;

int main () {
    // array
    int numbers[4] = {3, 7, 12, 16};
    int count1;

    for (count1 = 0; count1 < (sizeof(numbers) / 4); count1++) {
        cout << count1 << " - " << numbers[count1] << endl;
    }
    // matrix
    int matix[3][3] = {{0,0,0}, {0,0,0}, {1,1,1}};
    int count2, count3;
    for (count2 = 0; count2 < 3; count2++) {
        // cout << " == " << sizeof(matix) / 4 << " - " << sizeof(matix[count2]) / 4 << " == ";
        for (count3 = 0; count3 < (sizeof(matix[count2]) / 4); count3++) {
            cout << matix[count2][count3] << "  ";
        }
        cout << endl;
    }
    cout << "programa finalizado!";

    return 0;
}
