#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    int choice = 0;
    float balance = 0.0f;

    printf("Welcome to the bank!\n");

    do{
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                printf("Thank you for banking with us!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    }while(choice != 4);

    return 0;
}

void checkBalance(float balance) {
    printf("\n ur current balance is %.2f\n", balance);
}

float deposit() {

    float amount = 0.0f;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount. Please try again.\n");
        return 0.0f;
    }else if (amount == 0) {
        printf("No amount deposited.\n");
    }else {
        printf("Amount deposited: %.2f\n", amount);
        return amount;
    }
    
}

float withdraw(float balance) {
    float amount = 0.0f;

    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount. Please try again.\n");
        return 0.0f;
    }else if (amount > balance) {
        printf("Insufficient balance.\n");
        return 0.0f;
    }else {
        printf("Amount withdrawn: %.2f\n", amount);
    }
    return 0.0f;
}