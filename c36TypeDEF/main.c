#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initial[3];

int main() {

    // 定义整数变量x，y，z，并赋值
    int x = 3;
    int y = 5;
    int z = x + y;

    // 定义Number类型的变量x，y，z，并赋值
    Number x = 3;
    Number y = 5;
    Number z = x + y;

    // 定义字符串变量name，并赋值
    String name = "Maki Winster";


    // 定义Initial类型的变量name1，name2，name3，并赋值
    Initial name1 = "SS";
    Initial name2 = "PS";
    Initial name3 = "ST";

    // 打印name1，name2，name3的值
    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%s\n", name3);


    // 打印z的值
    printf("z = %d\n", z);
}