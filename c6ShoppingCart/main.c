#include <stdio.h>

int main() {
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quntity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Welcome to the shopping cart program!\n");

    printf("Enter the name of the product: ");
    scanf("%s", item);


    printf("Enter the price of the product: ");
    scanf("%f", &price);

    printf("Enter the quantity of the product: ");
    scanf("%d", &quntity);

    getchar();
    printf("Enter the currency symbol: ");
    scanf("%c", &currency);

    total = price * quntity;

    printf("The total cost of %s is %c%.2f\n", item, currency, total);

    return 0;
}