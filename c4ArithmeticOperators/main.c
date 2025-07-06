#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    int c = 2;
    int z = c/b;

    // Arithmetic Operators
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", c / b);

    int m = 2;
    float n = 3;
    printf("Division of two float numbers: %f\n", m/n);


    // % - Modulus Operator
    int i = 10;
    int j = 3;
    printf("Modulus: %d\n", i % j);

    // ++ - Increment Operator
    // -- - Decrement Operator
    printf("Increment: %d\n", ++i);
    printf("Decrement: %d\n", --i);
    printf("Increment: %d\n", i++);
    printf("Decrement: %d\n", i--);
    return 0;
}