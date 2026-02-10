#include <iostream>
#include <string.h>
using namespace std;

char* MakeStrAdr(int len){
    // char *str = (char*)malloc(sizeof(char)*len); 이것과 동일한 연산자 new.
    char *str = new char[len];
    return str;
}

int main(){
    char *str = MakeStrAdr(20);
    strcpy(str, "I am so happy");
    cout << str << endl;
    // free(str); 이것과 동일한 연산자 delete
    delete[] str;
    return 0;
}