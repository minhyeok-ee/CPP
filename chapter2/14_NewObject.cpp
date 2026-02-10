#include <iostream>
#include <stdlib.h>

using namespace std;

class simple{
    public:
    simple(){
        cout << "I'm simple constructor" << endl;
    }
};

int main(){
    cout << "case 1: ";
    simple *sp1 = new simple;

    cout << "case 2: ";
    simple *sp2 = (simple *)malloc(sizeof(simple) * 1);

    cout << endl
         << "end of main" << endl;
    delete sp1;
    free(sp2);
    return 0;
}

// new와 malloc의 동작 방식에는 차이가 있다.