#include <stdio.h>

int main() {

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Converter Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        // 提示用户输入华氏温度
        // kg to pounds
        // 读取用户输入
        printf("Enter weight in kilograms: ");
        // 将华氏温度转换为摄氏温度
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462f;
        // 提示用户输入摄氏温度
        printf("%.2f kilograms is equal to %.2f pounds\n", kilograms, pounds);
    }
    if (choice == 2) {
        // pounds to kg
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462f;
        printf("%.2f pounds is equal to %.2f kilograms\n", pounds, kilograms);
    }
    if (choice != 1 && choice != 2) {
        printf("Invalid choice! Please enter 1 or 2\n");
    }


    return 0;
}