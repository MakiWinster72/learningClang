#include <stdio.h>
#include <stdlib.h>

int main() {
    // realloc() = realloc(ptc, bytes);

    int number = 0;

    printf("Enter the number of prices: ");
    scanf("%d", &number);

    float *price = malloc(number * sizeof(float));

    if (price == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price number#%d: ", i + 1);
        scanf("%f", &price[i]);
    }

    int newNum = 0;
    printf("Enter a new Number of prices: ");
    scanf("%d",&newNum);

    float *temp = realloc(price, newNum * sizeof(float));

    if (temp == NULL) {
        printf("Could not reallocate memory!\n");
    } else {
        price = temp;
        temp == NULL; //option
        
        for (int i = number; i < newNum; i++) {
            printf("Enter price %d: ", i + 1);
            scanf("%f", &price[i]);
        }

        for (int i = 0; i < newNum; i++) {
            printf("$%.2f ", price[i]);
        }
    }


    free(price);
    price = NULL;


    return 0;
}