#include <stdio.h>
void make2D();
int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%3d ", i * j);
        }
    }

    make2D();
}

void make2D() {

    int rows = 0;
    int cols = 0;
    char symbol = '\0';

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the symbol: ");
    scanf(" %c", &symbol);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
}