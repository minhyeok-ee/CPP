#include <iostream>

int main(){
    int val1;
    std::cout << "enter first num : ";
    std::cin >> val1;

    int val2;
    std::cout << "enter secont num : ";
    std::cin >> val2;

    int result = val1 + val2;
    std::cout << "add result : " << result << std::endl;

    return 0;
}