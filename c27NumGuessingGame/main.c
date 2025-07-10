#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 设置随机数种子
    srand(time(NULL));

    int guess = 0; // 猜测的数字
    int tries = 0; // 尝试次数
    int min = 1; // 最小值
    int max = 100; // 最大值
    int answer = rand() % (max - min + 1) + min; // 生成1到100之间的随机数

    printf("Welcome to the number guessing game!\n"); // 打印欢迎信息
    printf("I have a number between 1 and 100. Can you guess it?\n"); // 打印提示信息

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("Too low! Try again.\n");
        }else if (guess > answer) {
            printf("Too high! Try again.\n");
        }else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }
    }while (guess != answer);
    printf("Thanks for playing!\n");

    return 0;
}