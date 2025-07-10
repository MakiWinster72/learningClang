#include <stdio.h>
#include <math.h>

int main() {
    // 定义变量
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    // 打印标题
    printf("Compounded Interest Calculator\n");
    // 提示用户输入本金
    printf("Enter the principal (P): ");
    // 读取用户输入的本金
    scanf("%lf", &principal);

    // 提示用户输入利率
    printf("Enter the rate (r)%%: ");
    scanf("%lf", &rate);
    rate /= 100.0;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    printf("The total amount after %d years is $%.2lf\n", years, total);

    // 打印hours和minutes，以及meridiem
    return 0;
}