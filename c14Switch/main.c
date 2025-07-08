#include <stdio.h>

int main() {
    int dayOfWeek = 1;

    if (dayOfWeek == 1) {
        printf("Monday\n");
    } else if (dayOfWeek == 2) {
        printf("Tuesday\n");
    } else if (dayOfWeek == 3) {
        printf("Wednesday\n");
    } else if (dayOfWeek == 4) {
        printf("Thursday\n");
    } else if (dayOfWeek == 5) {
        printf("Friday\n");
    } else if (dayOfWeek == 6) {
        printf("Saturday\n");
    } else if (dayOfWeek == 7) {
        printf("Sunday\n");
    } else {
        printf("Invalid day of the week\n");
    }

    // Using switch statement
    switch (dayOfWeek) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day of the week\n");
    }
}