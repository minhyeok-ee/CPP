#include <iostream>
#include <cstring>
using namespace std;

class MyFriendInfo{
    private:
        char *name;
        int age;
    public:
        MyFriendInfo(char *myname, int myage):age(myage){
            name = new char[strlen(myname) + 1];
            strcpy(name, myname);
        }
        ~MyFriendInfo(){
            delete[] name;
        }
        void ShowMyFriendInfo(){
            cout << "이름: " << name << endl;
            cout << "나이: " << age << endl;
        }
};

class MyFriendDetailInfo:public MyFriendInfo{
    private:
        char *addr;
        char *phone;
    public:
        MyFriendDetailInfo(char *Myname, int myage, char *myaddr, char *myphone): MyFriendInfo(Myname, myage){
            addr = new char[strlen(myaddr) + 1];
            phone = new char[strlen(myphone) + 1];
            strcpy(addr, myaddr);
            strcpy(phone, myphone);
        }
        ~MyFriendDetailInfo(){
            delete[] addr;
            delete[] phone;
        }
        void ShowMyFriendDetailInfo(){
            ShowMyFriendInfo();
            cout << "주소: " << addr << endl;
            cout << "전화: " << phone << endl;
        }
};

int main() {
    MyFriendDetailInfo f1("kim", 21, "incheon", "010-1111-2222");
    f1.ShowMyFriendDetailInfo();
    return 0;
}

// p.297