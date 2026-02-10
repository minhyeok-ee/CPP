#include <iostream>

int main(){
    int n;

    std::cout << "몇단? : ";
    std::cin >> n;

    for (int i = 1; i <= 9; i++){
        std::cout << n << " x " << i << " = "  << n * i << std::endl;
    }
    return 0;
}