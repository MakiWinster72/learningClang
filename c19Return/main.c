#include <stdio.h>
#include <stdbool.h>

int square(int x) {
    int result = x * x;
    return result;
}

bool ageCheck(int age) {
    if (age >= 18) {
        return true;
    } else {
        return false;
    }
}

int getMax(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int x = square(2);
    int y = square(3);
    int z = square(4);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}