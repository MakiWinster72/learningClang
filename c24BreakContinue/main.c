#include <stdio.h>

int main() {
    

    // break = Breaks out of a loop
    // continue = Skips the current iteration

    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break;
        }
        if (i == 2) {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}