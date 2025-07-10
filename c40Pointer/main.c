#include <stdio.h> 

void birthday(int *age);

int main() {

    // 定义一个整型变量age，并赋值为20
    int age = 20;
    // 定义一个指向整型的指针pAge，并将age的地址赋值给pAge
    int *pAge = &age;

    // 调用birthday函数，传入pAge的地址
    birthday(pAge); // &age

    // 返回0，表示程序正常结束
    return 0;

}

void birthday(int *age) {

    // *age = *age + 1;
    (*age)++; // ()

    printf("Happy birthday! You are now %d\n", *age);
}