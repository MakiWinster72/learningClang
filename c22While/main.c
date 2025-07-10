#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void enterName();
void playingGame();
int main() {

    // 声明一个整数变量number，并初始化为1
    int number = 1;
    
    // 使用do-while循环，先执行一次循环体，再判断条件
    do
    {
        // 提示用户输入一个正数
        printf("Enter a positive number: ");
        // 读取用户输入的值，并存储到number变量中
        scanf("%d", &number);
    } while (number <= 0); // 如果number小于等于0，则继续循环
    
    
    // 使用while循环，先判断条件，再执行循环体
    while(number <= 0) {
        // 提示用户输入一个正数
        printf("Enter a positive number: ");
        // 读取用户输入的值，并存储到number变量中
        scanf("%d", &number);
    }

    // 调用enterName函数
    getchar();
    enterName();

    // 调用playingGame函数
    playingGame();

    // // 无限循环，打印Hello World！
    // while(1) {
    //     printf("Hello World!\n");
    // } //ctrl + c

    // 返回0，表示程序正常结束
    return 0;
}

void enterName() {
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("Name cannot be empty! Pls enter ur name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
}

void playingGame() {
    bool isRunning = true;
    char response = 'y';

    while (isRunning) {
        printf("u r playing a game!\n");
        printf("Do u want to continue? (y/n): \n");
        scanf("%c", &response);

        if (response == 'n') {
            isRunning = false;
        }
    }
    printf("u exited the game!\n");
}