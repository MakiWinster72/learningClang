#include <stdio.h>
#include <stdbool.h>

int main() {

    // && = AND
    // || = OR
    // ! = NOT
    
    int temp = 20;

    // 如果温度大于15且小于25，则打印"The temperature is GOOD"
    if(temp > 15 && temp < 25) {
        printf("The temperature is GOOD\n");
    } else {
        // 否则打印"The temperature is BAD"
        printf("The temperature is BAD\n");
    }

    // 如果温度小于15或大于25，则打印"The temperature is BAD"
    if(temp < 15 || temp > 25) {
        printf("The temperature is BAD\n");
    }else {
        // 否则打印"The temperature is GOOD"
        printf("The temperature is GOOD\n");
    }

    // 定义一个布尔变量isSunny，表示是否晴天
    bool isSunny = true;

    // 如果isSunny为真且温度大于15，则打印"It is Sunnny outside"
    if(isSunny && temp > 15) {
        printf("It is Sunnny outside\n");
    }else {
        // 否则打印"It is not Sunny outside"
        printf("It is not Sunny outside\n");
    }

    return 0;
}