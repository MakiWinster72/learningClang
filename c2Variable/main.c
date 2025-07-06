#include <stdio.h>
#include <stdbool.h>

int main() {

    // 变量 = 存储值的容器
    int age = 20;
    int year = 2025;
    int quantity = 1;


    printf("You are %d years old\n", age);
    printf("The year is %d \n", year);
    printf("You have ordered %d x items\n", quantity);


    float gpa = 2.5;
    float price = 19.99;
    float temperature = 35;

    printf("Your gpa is %.1f\n", gpa);
    printf("The price is $%f\n", price);
    printf("The temperature is %f\n", temperature);


    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);


    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);


    char name[] = "Maki Winster";
    char food[] = "pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your fav food is %s\n", food);
    printf("Your email is %s\n", email);

    bool isOnline = true;
    bool isStudent = true;

    if(isStudent) {
        printf("ur a Student\n");
    }else {
        printf("ur not a student\n");
    }

    
    printf("%d\n", isOnline);

    return 0;
}


// int = 整数（4字节）
// float = 单精度浮点数（4字节）
// double = 双精度浮点数（8字节）
// char = 字符（1字节）
// char[] = 字符串（1字节 * 字符数）
// bool = 布尔值（1字节，需要<stdbool.h>）