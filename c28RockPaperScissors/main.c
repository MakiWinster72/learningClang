#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    
    // 设置随机数种子
    srand(time(NULL));

    printf("*** RPS ***\n");

    // 获取用户选择
    int userChoice = getUserChoice();
    // 获取计算机选择
    int computerChoice = getComputerChoice();

    // 根据用户选择输出相应的信息
    switch(userChoice) {
        case 1:
            printf("You chose Rock\n");
            break;
        case 2:
            printf("You chose Paper\n");
            break;
        case 3:
            printf("You chose Scissors\n");
            break;
    }

    // 根据计算机选择输出相应的信息
        switch(computerChoice) {
        case 1:
            printf("Compoter chose Rock\n");
            break;
        case 2:
            printf("Compoter chose Paper\n");
            break;
    printf("%5d\n", num1); // 输出宽度为5，右对齐
            printf("Compoter chose Scissors\n");
            break;
    }

    // 检查胜负
    checkWinner(userChoice, computerChoice);

    return 0;
}

// 生成计算机的选择
int getComputerChoice() {
    // 生成1到3之间的随机数
    return rand() % 3 + 1;
}

// 获取用户选择
int getUserChoice() {

    // 定义用户选择变量
    int choice = 0;

    // 循环获取用户选择，直到用户选择有效
    do {
        // 提示用户输入选择
        printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
        // 获取用户输入
        scanf("%d", &choice);

    // 当用户选择不在1-3之间时，继续循环
    }while(choice < 1 || choice > 3);

    // 返回用户选择
    return choice;
}
// 函数：checkWinner
// 功能：判断用户和计算机的选择，输出结果
// 参数：userChoice：用户的选择，computerChoice：计算机的选择
void checkWinner(int userChoice, int computerChoice) {

    // 如果用户和计算机的选择相同，输出平局
    if(userChoice == computerChoice) {
        printf("It's a tie!\n");
    // 如果用户选择剪刀，计算机选择布，用户赢
    } else if (userChoice == 1 && computerChoice == 3) {
        printf("You win!\n");
    // 如果用户选择布，计算机选择剪刀，用户赢
    } else if (userChoice == 2 && computerChoice == 1) {
        printf("You win!\n");
    // 如果用户选择布，计算机选择石头，用户赢
    } else if (userChoice == 3 && computerChoice == 2) {
        printf("You win!\n");
    // 其他情况，用户输
    } else {
        printf("You lose!\n");
    }

}