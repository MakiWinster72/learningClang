#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void enterName();
void playingGame();
int main() {

    int number = 1;
    
    do
    {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    } while (number <= 0);
    
    
    while(number <= 0) {
        printf("Enter a positive number: ");
        scanf("%d", &number);
    }

    getchar();
    enterName();

    playingGame();

    // while(1) {
    //     printf("Hello World!\n");
    // } //ctrl + c

    return 0;
}

void enterName() {
    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0) {
        printf("Name cannot be empty! Pls enter ur name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }
}

void playingGame() {
    bool isRunning = true;
    char response = 'y';

    while (isRunning) {
        printf("u r playing a game!\n");
        printf("Do u want to continue? (y/n): \n");
        scanf("%c", &response);

        if (response == 'n') {
            isRunning = false;
        }
    }
    printf("u exited the game!\n");
}