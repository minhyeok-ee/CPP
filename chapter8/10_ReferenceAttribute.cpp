#include <iostream>
using namespace std;

class First{
    public:
        void FirstFunc() { cout << "first function" << endl; }
        virtual void SimpleFunc() { cout << "first simple function" << endl; }
};

class Second: public First{
    public:
        void SecondFunc() { cout << "second function" << endl; }
        void SimpleFunc() { cout << "second simple function" << endl; }
};

class Third: public Second{
    public:
        void ThirdFunc() { cout << "third function" << endl; }
        void SimpleFunc() { cout << "third simple function" << endl; }
};

int main() {
    Third obj;
    obj.FirstFunc();
    obj.SecondFunc();
    obj.ThirdFunc();
    obj.SimpleFunc();

    Second &sref = obj;
    sref.FirstFunc();
    sref.SecondFunc();
    sref.SimpleFunc();

    First &fref = obj;
    fref.FirstFunc();
    fref.SimpleFunc();

    return 0;
}