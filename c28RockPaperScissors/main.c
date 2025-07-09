#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {
    
    srand(time(NULL));

    printf("*** RPS ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice) {
        case 1:
            printf("You chose Rock\n");
            break;
        case 2:
            printf("You chose Paper\n");
            break;
        case 3:
            printf("You chose Scissors\n");
            break;
    }

        switch(computerChoice) {
        case 1:
            printf("Compoter chose Rock\n");
            break;
        case 2:
            printf("Compoter chose Paper\n");
            break;
        case 3:
            printf("Compoter chose Scissors\n");
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}

int getComputerChoice() {
    return rand() % 3 + 1;
}

int getUserChoice() {

    int choice = 0;

    do {
        printf("Enter your choice (1 = Rock, 2 = Paper, 3 = Scissors): ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 3);

    return choice;
}
void checkWinner(int userChoice, int computerChoice) {

    if(userChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if (userChoice == 1 && computerChoice == 3) {
        printf("You win!\n");
    } else if (userChoice == 2 && computerChoice == 1) {
        printf("You win!\n");
    } else if (userChoice == 3 && computerChoice == 2) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

}