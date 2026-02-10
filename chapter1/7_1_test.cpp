#include <iostream>

void swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}

void swap(char *n1, char *n2){
    char temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}

void swap(double *n1, double *n2){
    double temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}

int main(){
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A', ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double db1 = 1.111, db2 = 5.555;
    swap(&db1, &db2);
    std::cout << db1 << ' ' << db2 << std::endl;

    return 0;
}