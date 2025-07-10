#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isOnline = false;

    // 判断isOnline是否为true，如果是，则打印"Online"，否则打印"Offline"
    printf("%s", (isOnline) ? "Online" : "Offline");

    int number = 8;

    // 判断number是否为偶数，如果是，则打印"Even"，否则打印"Odd"
    printf("%s", (number % 2 == 0) ? "Even" : "Odd");


    int x = 10;
    int y = 20;
    int z = (x > y) ? x : y; // z will be 20

    // 打印z的值
    printf("%d", z);


    int hours = 10;
    int minutes = 30;
    char meridiem[] = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}