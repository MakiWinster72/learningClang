#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age) {
    printf("Happy birthday to you\n");
    printf("Happy birthday to you\n");
    printf("Happy birthday dear %s!", name);
    printf("Happy birthday to you\n");
    printf("You are now %d years old\n", age);
}

int main() {
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happyBirthday(name, age);
    return 0;
}