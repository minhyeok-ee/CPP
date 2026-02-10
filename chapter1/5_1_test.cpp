#include <iostream>

int main(){
    int v1, v2, v3, v4, v5;

    std::cout << "enter 1st num: ";
    std::cin >> v1;

    std::cout << "enter 2nd num: ";
    std::cin >> v2;

    std::cout << "enter 3rd num: ";
    std::cin >> v3;

    std::cout << "enter 4th num: ";
    std::cin >> v4;

    std::cout << "enter 5th num: ";
    std::cin >> v5;

    int result = v1 + v2 + v3 + v4 + v5;
    std::cout << "sum : " << result << std::endl;

    return 0;
}