#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // 如果a大于b，输出a大于b
    if (a > b) {
        printf("a is greater than b\n");
    } else {
        printf("a is not greater than b\n");
    }

    if (a > b && a > c) {
        printf("a is greater than both b and c\n");
    }

    int age = 0;

        // 如果不为空，输出问候语
    printf("Enter your age: ");
    scanf("%d", &age);

    // if (age >= 65) {
    //     printf("You are an adult\n");
    // }else if (age >= 18) {
    //     printf("You are an adult\n");
    // }else if (age < 0) {
    //     printf("You haven't been born yet\n");
    // }else if (age == 0) {
    //     printf("ur a new born");
    // }else {
    //     printf("You are not an adult\n");
    // }

    if (age >= 65) {
        printf("You are an seior\n");
    }

    if (age >= 18 && age < 65) {
        printf("You are an adult\n");
    }

    if (age < 18 && age >= 0) {
        printf("You are not an adult\n");
    }

    if (age < 0) {
        printf("You haven't been born yet\n");
    }

    return 0;
}