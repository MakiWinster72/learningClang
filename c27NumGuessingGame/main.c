#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = rand() % (max - min + 1) + min;

    printf("Welcome to the number guessing game!\n");
    printf("I have a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++;

        if (guess < answer) {
            printf("Too low! Try again.\n");
        }else if (guess > answer) {
            printf("Too high! Try again.\n");
        }else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }
    }while (guess != answer);
    printf("Thanks for playing!\n");

    return 0;
}