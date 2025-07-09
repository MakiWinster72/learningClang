#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isOnline = false;

    printf("%s", (isOnline) ? "Online" : "Offline");

    int number = 8;

    printf("%s", (number % 2 == 0) ? "Even" : "Odd");


    int x = 10;
    int y = 20;
    int z = (x > y) ? x : y; // z will be 20

    printf("%d", z);


    int hours = 10;
    int minutes = 30;
    char meridiem[] = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);

    return 0;
}