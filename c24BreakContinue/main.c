#include <stdio.h>

int main() {
    

    // break = Breaks out of a loop
    // continue = Skips the current iteration

    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break; // 当i等于5时，跳出循环
        }
        if (i == 2) {
            continue; // 当i等于2时，跳过本次循环
        }
        printf("%d\n", i); // 输出i的值
    }
    return 0;
}