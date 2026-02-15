#include <iostream>
using namespace std;

class SoSimple{
    public:
        static int simObjcnt;
    public:
    SoSimple(){
        simObjcnt++;
    }
};
int SoSimple::simObjcnt = 0;

int main() {
    cout << SoSimple::simObjcnt << "번째 SoSimple 객체" << endl;
    SoSimple sim1;
    SoSimple sim2;

    cout << SoSimple::simObjcnt << "번째 SoSimple 객체" << endl;
    cout << sim1.simObjcnt << "번째 SoSimple 객체" << endl;
    cout << sim2.simObjcnt << "번째 SoSimple 객체" << endl;
    return 0;
}