#include <iostream> // 입출력 관련 헤더 .h는 생략한다. 붙이면 안됨

int main(void){
    int num = 20;
    std::cout << "hello world" << std::endl;
    std::cout << "hello " << "world" << std::endl;
    std::cout << num << ' ' << 'A';
    std::cout << ' ' << 3.14 << std::endl;
    return 0;
}

// 출력을 위해 std::cout<< '출력대상'; format 사용
