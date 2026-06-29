#include <iostream>
using namespace std;

class First{
    public:
        void myFunc() {
            cout << "first" << endl;
        }
};

class Second:public First{
    public:
        void myFunc() {
            cout << "second" << endl;
        }
};

class Third:public Second{
    public:
        void myFunc() {
            cout << "third" << endl;
        }
};

int main() {
    Third *tptr = new Third();
    Second *sptr = tptr;
    First *fptr = sptr;

    fptr->myFunc();
    sptr->myFunc();
    tptr->myFunc();

    delete tptr;
    return 0;
}