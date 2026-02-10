#include <iostream>
using namespace std;

void Add(int &val){
    val += 1;
    return;
}

void Reverse(int &val){
    val *= -1;
    return;
}

int main(){
    int val = 10;

    Add(val);
    cout << "ADD 1: " << val << endl;
    Reverse(val);
    cout << "Reverse: " << val << endl;

    return 0;
}