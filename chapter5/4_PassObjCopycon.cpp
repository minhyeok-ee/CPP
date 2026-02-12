#include <iostream>
using namespace std;

class SoSimple{
    private:
        int num;
    public:
    SoSimple(int n): num(n) {}
    SoSimple(const SoSimple& copy) : num(copy.num){
        cout << "called SoSimple(const SoSimple& copy)" << endl;
    }
    void ShowData(){
        cout << "num: " << num << endl;
    }
};

void SoSimpleFuncObj(SoSimple ob){
    ob.ShowData();
}

int main(){
    SoSimple obj(7);
    cout << "함수 호출 전" << endl;
    SoSimpleFuncObj(obj);
    cout << "함수 호출 후" << endl;
    return 0;
}