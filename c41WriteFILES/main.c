#include <stdio.h>

int main() {

    // 打开文件output.txt，以写入模式
    FILE *pFile = fopen("output.txt", "w");

    // 定义字符串text
    char text[] = "BOOTY BOOTY BOOTY\nROCKIN";


    // 如果文件打开失败
    if (pFile == NULL) {
        // 输出错误信息
        printf("Error opening file\n");
        // 返回1
        return 1;
    }

    // 将字符串text写入文件
    fprintf(pFile, "%s", text);

    // 输出成功信息
    printf("FILE was written successfully");



    // 关闭文件
    fclose(pFile);


    // 返回0
    return 0;
}    // 返回0
