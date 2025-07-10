#include <stdio.h>
#include <stdbool.h>

// 定义一个函数，用于计算一个整数的平方
int square(int x) {
    // 定义一个变量，用于存储计算结果
    int result = x * x;
    // 返回计算结果
    return result;
}

// 定义一个函数，用于检查年龄是否大于等于18岁
bool ageCheck(int age) {
    // 如果年龄大于等于18岁，返回true
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int getMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}