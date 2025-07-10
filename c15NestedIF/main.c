#include <stdio.h>

int main() {
    // 声明一个整型变量age
    int age;
    // 提示用户输入年龄
    printf("Enter your age: ");
    // 从用户输入中读取年龄并存储在age变量中
    scanf("%d", &age);

    // 如果年龄大于等于18
    if (age >= 18) {
        // 输出"You are an adult."
        printf("You are an adult.\n");

        // 如果年龄大于等于21
        if (age >= 21) {
            // 输出"You are also an adult who can drink."
            printf("You are also an adult who can drink.\n");
        } else {
            // 输出"You are an adult who cannot drink."
            printf("You are an adult who cannot drink.\n");
        }
    } else {
        // 输出"You are not an adult."
        printf("You are not an adult.\n");
    }

    // 返回0，表示程序正常结束
    return 0;
}