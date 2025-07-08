#include <stdio.h>
#include <stdbool.h>

int main() {

    // && = AND
    // || = OR
    // ! = NOT
    
    int temp = 20;

    if(temp > 15 && temp < 25) {
        printf("The temperature is GOOD\n");
    } else {
        printf("The temperature is BAD\n");
    }

    if(temp < 15 || temp > 25) {
        printf("The temperature is BAD\n");
    }else {
        printf("The temperature is GOOD\n");
    }

    bool isSunny = true;

    if(isSunny && temp > 15) {
        printf("It is Sunnny outside\n");
    }else {
        printf("It is not Sunny outside\n");
    }

    return 0;
}