#include <stdio.h>
#include <unistd.h> //linux & mac
// #include <windows.h> //windows

int main() {
    
    // 循环10次，每次休眠1秒，并打印i的值
    for (int i = 0; i < 10; i++) {
        sleep(1);
        printf("%d\n", i);
    }

    // 循环10次，每次i增加2，并打印i的值
    for (int i = 0; i < 10; i+=2) {
        printf("%d\n", i);
    }
    return 0;
}