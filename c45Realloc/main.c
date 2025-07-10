#include <stdio.h>
#include <stdlib.h>

int main() {
    // realloc() = realloc(ptc, bytes);

    int number = 0;

    printf("Enter the number of prices: ");
    scanf("%d", &number);

    // 动态分配内存，存储价格
    float *price = malloc(number * sizeof(float));

    // 检查内存分配是否成功
    if (price == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // 循环输入价格
    for (int i = 0; i < number; i++) {
        printf("Enter price number#%d: ", i + 1);
        scanf("%f", &price[i]);
    }

    // 输入新的价格数量
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