#include <stdio.h>

int main() {
    // 声明变量
    char choice;
    float fahrenheit = 0.0f;
    float celsius = 0.0f;

    // 提示用户输入选择
    printf("Enter 'F' to convert Fahrenheit to Celsius or 'C' to convert Celsius to Fahrenheit: ");
    // 读取用户输入
    scanf("%c", &choice);

    // 判断用户输入的选择
    if (choice == 'F' || choice == 'f') {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
    }else if( choice == 'C' || choice == 'c') {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
    }else {
        printf("Invalid choice. Please enter 'F' or 'C'.\n");
    }

    printf("The converted temperature is: %.2f\n", (choice == 'F' || choice == 'f') ? celsius : fahrenheit);

    return 0;
}