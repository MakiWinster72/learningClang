#include <stdio.h>
#include <stdbool.h>

// Function prototype
void hello(char name[], int age);
bool ageCheck(int age);

int main() {
    hello("Alice", 25);

    if (ageCheck(17)) {
        printf("You are old enough to vote.\n");
    }else {
        printf("You are not old enough to vote.\n");
    }

    return 0;
}

void hello(char name[], int age) {
    printf("Hello, %s! You are %d years old.\n", name, age);
}

bool ageCheck(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}