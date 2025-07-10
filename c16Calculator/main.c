#include <stdio.h>

int main() {
    // 定义运算符、两个数字和结果变量
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    // 提示用户输入两个数字
    printf("Enter two number1: ");
    // 读取用户输入的数字
    scanf("%lf", &num1);
    // 提示用户输入运算符
    printf("Enter operator: ");
    // 读取用户输入的运算符
    scanf(" %c", &operator);
    // 提示用户输入第二个数字
    printf("Enter two number2: ");
    // 读取用户输入的数字
    scanf("%lf", &num2);

    // 根据运算符进行相应的计算
    switch (operator) {
        case '+':
            // 加法运算
            result = num1 + num2;
            break;
        case '-':
            // 减法运算
            result = num1 - num2;
            break;
        case '*':
            // 乘法运算
            result = num1 * num2;
            break;
        case '/':
            // 除法运算
            if (num2 != 0.0) {
                result = num1 / num2;
            } else {
                // 除数为0，输出错误信息
                printf("Error: Division by zero\n");
                return 1;
            }
            break;
        default:
            // 运算符无效，输出错误信息
            printf("Error: Invalid operator\n");
            return 1;
    }
    // 输出计算结果
    printf("Result: %.2lf\n", result);
    return 0;
}