#include <iostream>

int main() {
    char name[100];
    char lang[100];

    std::cout << "your name? : ";
    std::cin >> name;

    std::cout << "your favorite lang? : ";
    std::cin >> lang;

    std::cout << "my name is " << name << std::endl;
    std::cout << "my favorite language is " << lang << std::endl;

    return 0;
}