#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;

    // 提示用户输入玩家数量
    printf("Enter the number of players: ");
    scanf("%d", &number);

    // 使用 calloc 动态分配内存，每个 int 初始化为 0
    int *scores = calloc(number, sizeof(int));

    // 判断内存是否分配成功
    if(scores == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    // 逐个读取每个玩家的分数
    for (int i = 0; i < number; i++) {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // 输出所有玩家的分数
    for (int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }

    // 释放动态内存，并将指针设为 NULL 防止野指针
    free(scores);
    scores = NULL;

    return 0;
}
