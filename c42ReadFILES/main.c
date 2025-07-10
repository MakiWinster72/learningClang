#include <stdio.h>

int main() {
    // 打开文件input.txt，以只读方式
    FILE *pFILE = fopen("input.txt", "r");
    // 定义一个字符数组buffer，大小为1024
    char buffer[1024] = {0};

    // 如果文件打开失败
    if(pFILE == NULL) {
        // 输出错误信息
        printf("Could not open file\n");
        // 返回1
        return 1;
    }

    // 循环读取文件中的每一行
    while (fgets(buffer, sizeof(buffer), pFILE) != NULL) {
        // 输出读取到的每一行
        printf("%s", buffer);
    }

    // 关闭文件
    fclose(pFILE);

    return 0;
}