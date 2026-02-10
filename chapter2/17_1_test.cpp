#include <cstring>
#include <iostream>
using namespace std;


int main(){
    char arr[10];
    char sample[] = "hello";

    strcpy(arr, sample);
    cout << arr << endl;
    cout << strlen(arr) << endl;

    strcat(arr, "!");
    cout << arr << endl;
    cout << strcmp(arr, sample) << endl;
    return 0;
}