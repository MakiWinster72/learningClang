#include <stdio.h>
#include <string.h>

int main() {
    int age;
    float gpa;
    char grade;
    char name[20];


    // printf("Enter your age: ");
    // scanf("%d", &age);

    // printf("Enter your GPA: ");
    // scanf("%f", &gpa);

    // printf("Enter your grade: ");
    // scanf(" %c", &grade);

    // printf("Enter your full name: ");
    // scanf("%s", name); //无法读取有空格的字符串

    // getchar(); //清除缓冲区的换行符
    // fgets(name, sizeof(name), stdin); //可以读取有空格的字符串
    // name[strlen(name) - 1] = '\0'; //去除换行符

    printf("Your age is %d\n", age);
    printf("Your GPA is %.2f\n", gpa);
    // 输入货币符号
    printf("Your grade is %c\n", grade);
    printf("Your name is %s\n", name);

    // 计算总价

    return 0;
    // 输出总价
}