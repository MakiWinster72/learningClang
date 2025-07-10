#include <stdio.h>
#include <stdbool.h>

// Function prototype
void hello(char name[], int age);
bool ageCheck(int age);

int main() {
    // 调用hello函数，传入参数"Alice"和25
    hello("Alice", 25);

    // 如果ageCheck函数返回值为真，则输出"You are old enough to vote."，否则输出"You are not old enough to vote."
    if (ageCheck(17)) {
        printf("You are old enough to vote.\n");
    }else {
        printf("You are not old enough to vote.\n");
    }

    // 返回0，表示程序正常结束
    return 0;
}

// 定义一个函数，用于输出问候语
void hello(char name[], int age) {
    // 使用printf函数输出问候语，name和age为函数参数
    printf("Hello, %s! You are %d years old.\n", name, age);
}

// 函数用于检查年龄是否大于等于18岁
bool ageCheck(int age) {
    // 如果年龄大于等于18岁，返回true
    if (age >= 18) {
        return true;
    // 否则返回false
    } else {
        return false;
    }
}