#include <stdio.h>

int result = 0;

// 定义一个函数，用于计算两个整数的和
int add(int a, int b) {
    // 定义一个变量，用于存储计算结果
    int result = a + b;
    // 返回计算结果
    return result;
}

// 函数substract用于计算两个整数的差值
int substract(int a, int b) {
    // 定义一个整型变量result，用于存储a和b的差值
    int result = a - b;
    // 返回result
    return result;
}

int main() {
    // 定义两个整数变量a和b，分别赋值为5和10
    int a = 5;
    int b = 10;
    // 调用add函数，将a和b作为参数传入，并将返回值赋给result
    result = add(a, b);

    // 使用printf函数输出结果
    printf("The result is %d\n", result);
    // 返回0，表示程序正常结束
    return 0;
}