#include <iostream>
using namespace std;

class BaseOne{
    public:
        void SimpleFunc() { cout << "baseone" << endl; }
};

class BaseTwo{
    public:
        void SimpleFunc() { cout << "basetwo" << endl; }
};

class MultiDerived: public BaseOne, protected BaseTwo{
    public:
        void ComplexFunc(){
            BaseOne::SimpleFunc();
            BaseTwo::SimpleFunc();
        }
};

int main() {
    MultiDerived mdr;
    mdr.ComplexFunc();
    return 0;
}