#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compounded Interest Calculator\n");
    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the rate (r)%%: ");
    scanf("%lf", &rate);
    rate /= 100.0;

    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + rate / timesCompounded), timesCompounded * years);

    printf("The total amount after %d years is $%.2lf\n", years, total);

    return 0;
}