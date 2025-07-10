#include <stdio.h>
#include <stdlib.h>

int main() {
    // 声明一个整型变量number，用于存储输入的分数数量
    int number = 0;
    // 输出提示信息，要求用户输入分数数量
    printf("Enter the number of grades: ");
    // 从用户输入中读取分数数量，并存储到number变量中
    scanf("%d", &number);

    // 动态分配一块内存空间，用于存储分数，大小为number个字符
    char *grade = malloc(number * sizeof(char));

    // 检查内存分配是否成功
    if(grade == NULL) {
        printf("Memory allocation filed\n");
        return 1;
    }

    // 循环读取用户输入的分数，并存储到grade数组中
    for(int i = 0; i < number; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grade[i]);
    }

    // 循环输出用户输入的分数
    for(int i = 0; i < number; i++) {
        printf("%c ", grade[i]);
    }

    // 释放动态分配的内存空间，将其归还给操作系统
    free(grade); // returning "rented" space back to the OS
    // 将grade指针置为NULL，避免悬空指针
    grade = NULL; // avoids dangling pointers
    // 返回0，表示程序正常结束
    return 0;
}