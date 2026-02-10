#include <iostream>
#include <cstring>
using namespace std;

class Printer{
    private:
        char string[20];

    public:
        void SetString(const char *str);
        void ShowString();
};

void Printer::SetString(const char *str){
    strcpy(string, str);
    return;
}

void Printer::ShowString(){
    cout << string << endl;
    return;
}

int main(){
    Printer pnt;
    pnt.SetString("hello world");
    pnt.ShowString();

    pnt.SetString("I love c++");
    pnt.ShowString();

    return 0;
}