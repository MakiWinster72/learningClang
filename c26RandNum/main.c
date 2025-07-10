#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); // seed the random number generator
    int min = 50;
    int max = 100;

    // 生成三个50到100之间的随机数
    int randNum1 = rand() % (max - min + 1) + min;
    int randNum2 = rand() % (max - min + 1) + min;
    int randNum3 = rand() % (max - min + 1) + min;

    printf("%d %d  %d\n", randNum1, randNum2, randNum3);


    return 0;
}