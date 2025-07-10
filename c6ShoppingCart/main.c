#include <stdio.h>

int main() {
    // SHOPPING CART PROGRAM

    char item[50] = "";
    float price = 0.0f;
    int quntity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Welcome to the shopping cart program!\n");

    // 输入商品名称
    printf("Enter the name of the product: ");
    scanf("%s", item);


    // 输入商品价格
    printf("Enter the price of the product: ");
    scanf("%f", &price);

    // 输入商品数量
    printf("Enter the quantity of the product: ");
    scanf("%d", &quntity);

    // 获取换行符
    getchar();
    printf("Enter the currency symbol: ");
    scanf("%c", &currency);

    total = price * quntity;

    printf("The total cost of %s is %c%.2f\n", item, currency, total);

    return 0;
}