#include <stdio.h>
#include <string.h>

int main() {
    
    // 声明一个字符数组，用于存储用户输入的名字
    char name[50] = "";

    // 提示用户输入名字
    printf("Enter your name: ");
    // 从标准输入读取用户输入的名字，并存储到name数组中
    fgets(name, sizeof(name), stdin);
    // 将name数组中最后一个字符替换为'\0'，即字符串结束符
    name[strlen(name) - 1] = '\0';

    // 判断name数组是否为空
    if (strlen(name) == 0) {
        printf("Name is empty.\n");
    }else {
        printf("Hello, %s!\n", name);
    }
}