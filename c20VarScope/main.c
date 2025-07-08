#include <stdio.h>

int result = 0;

int add(int a, int b) {
    int result = a + b;
    return result;
}

int substract(int a, int b) {
    int result = a - b;
    return result;
}

int main() {
    int a = 5;
    int b = 10;
    result = add(a, b);

    printf("The result is %d\n", result);
    return 0;
}