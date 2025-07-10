#include <stdio.h>
void make2D();
int main() {
    int i, j;

    // 外层循环，控制行数
    for (i = 1; i <= 10; i++) {
        // 内层循环，控制列数
        for (j = 1; j <= 10; j++) {
            // 输出乘法表
            printf("%3d ", i * j);
        }
    }

    // 调用make2D函数
    make2D();
}

void make2D() {

    // 声明变量
    int rows = 0;
    int cols = 0;
    char symbol = '\0';

    // 提示用户输入行数
    printf("Enter the number of rows: ");
    // 读取用户输入的行数
    scanf("%d", &rows);

    // 提示用户输入列数
    printf("Enter the number of columns: ");
    // 读取用户输入的列数
    scanf("%d", &cols);

    // 提示用户输入符号
    printf("Enter the symbol: ");
    // 读取用户输入的符号
    scanf(" %c", &symbol);

    // 循环打印行
    for (int i = 0; i < rows; i++) {
        // 循环打印列
        for (int j = 0; j < cols; j++) {
            // 打印符号
            printf("%c ", symbol);
        }
        // 换行
        printf("\n");
    }
}