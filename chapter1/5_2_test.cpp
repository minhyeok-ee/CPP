#include <iostream>

int main(){
    char name[100];
    char num[100];

    std::cout << "enter name : ";
    std::cin >> name;

    std::cout << "enter ph : ";
    std::cin >> num;

    std::cout << "name : " << name << std::endl
              << "ph : " << num << std::endl;

    return 0;
}

