#include <iostream>
using namespace std;

class Calculator{
    private:
        int addcount;
        int mincount;
        int divcount;
        int mulcount;

    public:
        void Init();
        float Add(float a, float b);
        float Min(float a, float b);
        float Div(float a, float b);
        float Mul(float a, float b);
        void ShowOpCount();
};

void Calculator::Init(){
    addcount = 0;
    mincount = 0;
    divcount = 0;
    mulcount = 0;
}

float Calculator::Add(float a, float b){
    addcount++;
    return a + b;
}

float Calculator::Div(float a, float b){
    divcount++;
    return a / b;
}

float Calculator::Min(float a, float b){
    mincount++;
    return a - b;
}

float Calculator::Mul(float a, float b){
    mulcount++;
    return a * b;
}

void Calculator::ShowOpCount(){
    cout << "덧셈:" << addcount << " / 뺄셈:" << mincount << " / 곱셈:" << mulcount << " / 나눗셈:" << divcount << endl;
}

int main() {
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
    cal.ShowOpCount();
    return 0;
}