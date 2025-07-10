#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0; // 定义半径变量
    double area = 0.0; // 定义面积变量
    double suffaceArea = 0.0; // 定义表面积变量
    double volume = 0.0; // 定义体积变量
    const double PI = 3.14159; // 定义圆周率常量


    printf("Enter the radius: "); // 提示用户输入半径
    scanf("%lf" ,&radius); // 读取用户输入的半径

    area = PI * pow(radius, 2); // 计算面积
    suffaceArea = 4 * PI * pow(radius, 2); // 计算表面积
    volume = (4/3) * PI * pow(radius, 3);

    printf("Area: %lf", area);
    printf("\nSurface Area: %lf\n", suffaceArea);
    printf("Volume: %lf\n", volume);
    // 将利率转换为小数

    return 0;
    // 提示用户输入年数
}    // 读取用户输入的年数
    // 提示用户输入每年复利次数
    // 读取用户输入的每年复利次数
