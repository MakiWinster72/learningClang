#include <stdio.h>

int main() {
    // 格式化符号 = 使用%，后面跟着一个字符，表示输出数据的类型
    //            并且可选修改符号，如宽度，精度等
    //            控制者数据如何输出
    // %d = int
    // %f = float
    // %c = char
    // %s = string
    // %p = pointer
    // %u = unsigned int
    // %x = hexadecimal
    // %o = octal
    // %e = scientific notation

    int age = 25;
    float height = 170;
    char name[] = "John";
    char *ptr = &name[0];

    printf("My name is %s and I am %d years old.\n", name, age);
    printf("My height is %.2f cm.\n", height);
    printf("The first letter of my name is %c.\n", name[0]);
    printf("The address of my name is %p.\n", ptr);
    printf("My age in hexadecimal is %x.\n", age);
    printf("My age in octal is %o.\n", age);
    printf("My height in scientific notation is %e.\n", height);


    // 输出宽度
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    

    printf("%5d\n", num1);
    printf("%-5d\n", num2);
    printf("%+-5d\n", num2);
    printf("%5d\n", num3);
    printf("%05d\n", num3);


    // 输出精度
    float pi = 3.14159265358979323846;
    printf("%f\n", pi); // 默认精度
    printf("%.2f\n", pi);
    printf("%.4f\n", pi);

    // 输出宽度与精度
    printf("%5.2f\n", pi);
    printf("%-5.2f\n", pi);


    // 输出字符串
    char str[] = "Hello, World!";
    printf("%s\n", str);
    printf("%.5s\n", str);
    return 0;
}