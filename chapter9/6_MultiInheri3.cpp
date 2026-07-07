#include <iostream>
using namespace std;

class Base{
    public:
        Base() { cout << "base constructor" << endl; }
        void SimpleFunc() { cout << "baseone" << endl; }
};

class MiddleDerivedOne: virtual public Base{
    public:
        MiddleDerivedOne() : Base(){
            cout << "MiddleDerivedOne constructor" << endl;
        }
        void MiddleFuncOne(){
            SimpleFunc();
            cout << "MiddleDerivedOne" << endl;
        }
};

class MiddleDerivedTwo: virtual public Base{
    public:
        MiddleDerivedTwo(){
            SimpleFunc();
            cout << "MiddleDerivedTwo" << endl;
        }
        void MiddleFuncTwo(){
            SimpleFunc();
            cout << "MiddleDerivedTwo" << endl;
        }
};

class LastDerived: public MiddleDerivedOne, public MiddleDerivedTwo{
    public:
        LastDerived():MiddleDerivedOne(), MiddleDerivedTwo(){
            cout << "LastDerived Constructor" << endl;
        }
        void ComplexFunc(){
            MiddleFuncOne();
            MiddleFuncTwo();
            SimpleFunc();
        }
};

int main() {
    cout << "객체생성 전 ........." << endl;
    LastDerived ldr;
    cout << "객체생성 후 ........" << endl;
    ldr.ComplexFunc();
    return 0;
}