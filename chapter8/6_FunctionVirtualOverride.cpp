#include <iostream>
using namespace std;

class First{
    public:
        virtual void myFunc() { cout << "First" << endl; };
};

class Second: public First{
    public:
        virtual void myFunc() { cout << "Second" << endl; };
};

class Third: public Second{
    public: 
        virtual void myFunc() { cout << "Third" << endl; };
};

int main () {
    Third *tptr = new Third();
    Second *sptr = tptr;
    First *fptr = sptr;

    fptr->myFunc();
    sptr->myFunc();
    tptr->myFunc();
    delete tptr;

    return 0;
}