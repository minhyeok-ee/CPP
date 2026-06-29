#include <iostream>
#include <cstring>
using namespace std;

class Base{
    public:
        void BaseFunc(){
            cout << "Base Function" << endl;
        }
};

class Derived: public Base{
    public:
        void DerivedFunc() {
            cout << "Derived Function" << endl;
        }
};

int main () {
    Derived *dptr = new Derived();
    Base *bptr = dptr;
    bptr->BaseFunc();
    dptr->BaseFunc();
    dptr->DerivedFunc();
    
    return 0;
}