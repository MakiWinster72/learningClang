#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are an adult.\n");

        if (age >= 21) {
            printf("You are also an adult who can drink.\n");
        } else {
            printf("You are an adult who cannot drink.\n");
        }
    } else {
        printf("You are not an adult.\n");
    }

    return 0;
}