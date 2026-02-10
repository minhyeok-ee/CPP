const int num = 10; // 변경 불가능. num=20 불가능.

int val1, val2, val3;

const int *ptr1 = &val1; // const int를 가리키는 포인터

int *const ptr2 = &val2; // int를 가리키는 const 포인터. 주소값이 고정이다.

const int *const ptr3 = &val3; // const int를 가리키는 const 포인터. 둘다 고정. 이 메모리를 절때 안바꾸고 주소도 절때 안바꿈.

void swapvalue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    return;
}

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    return;
}
