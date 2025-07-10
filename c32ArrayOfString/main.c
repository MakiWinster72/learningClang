#include <stdio.h>
#include <string.h>

int main() {
    // Arrays of Strings
    char fruits[][10] = {"Apple", "Banana", "Cherry"};

    // Another way to initialize an array of strings
    char fruits2[][10] = {
        {'A', 'p', 'p', 'l', 'e', '\0'},
        {'B', 'a', 'n', 'a', 'n', 'a', '\0'},
        {'C', 'h', 'e', 'r', 'r', 'y', '\0'}
    };

    // Calculate the size of the array
    int size = sizeof(fruits) / sizeof(fruits[0]);

    // Loop through the array and print each string
    for(int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;

}

void exercise() {
    // 定义一个二维字符数组，用于存储3个名字
    char names[3][25] = {0};

    // 计算二维字符数组的行数
    int rows = sizeof(names) / sizeof(names[0]);

    // 提示用户输入一个名字
    printf("Enter a name: ");
    // 从标准输入读取一个字符串，存储到names[0]中
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names) - 1] = '\0';

    printf("%s\n", names[0]);
}