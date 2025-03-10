#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char txt1[20] = "CFB Cursos";
    char txt2[20] = "Bruno campos";
    char txt3[20] = "";

    // strcopy

    strcpy(txt3, txt1);
    cout << txt3 << endl;

    //strcpy(txt3, "");
    //strncpy(txt3, txt1, (size_t)3);   don't working
    //cout << txt3 << endl;

    //      memcpy
    struct texto {
        char str[15];
    } text1;

    memcpy(text1.str, txt2, strlen(txt2)+1);
    cout << text1.str << endl;

    //      strlen
    cout << "strlen : " << strlen(txt1) << endl;

    //      strcat
    strcat(txt1, txt2);
    cout << "strcat : " << txt1 << endl;

    //       strcmp
    int res = strcmp(text1.str, txt3);
    cout << "strcmp : " << res << endl;


    return 0;
}