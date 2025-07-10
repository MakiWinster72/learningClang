#include <stdio.h>
#include <string.h>

// 函数happyBirthday，用于打印生日祝福
void happyBirthday(char name[], int age) {
    // 打印第一句生日祝福
    printf("Happy birthday to you\n");
    // 打印第二句生日祝福
    printf("Happy birthday to you\n");
    // 打印第三句生日祝福，包含姓名
    printf("Happy birthday dear %s!", name);
    // 打印第四句生日祝福
    printf("Happy birthday to you\n");
    // 打印年龄
    printf("You are now %d years old\n", age);
}

int main() {
    // 定义一个字符数组，用于存储用户输入的名字
    char name[50] = "";
    // 定义一个整数，用于存储用户输入的年龄
    int age = 0;

    // 提示用户输入名字
    printf("Enter your name: ");
    // 从标准输入读取用户输入的名字，并存储到name数组中
    fgets(name, sizeof(name), stdin);
    // 将name数组中最后一个字符替换为'\0'，即字符串结束符
    name[strlen(name) - 1] = '\0';

    // 提示用户输入年龄
    printf("Enter your age: ");
    // 从标准输入读取用户输入的年龄，并存储到age变量中
    scanf("%d", &age);

    // 调用happyBirthday函数，传入用户输入的名字和年龄
    happyBirthday(name, age);
    // 返回0，表示程序正常结束
    return 0;
}