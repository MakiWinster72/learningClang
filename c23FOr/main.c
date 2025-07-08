#include <stdio.h>
#include <unistd.h> //linux & mac
// #include <windows.h> //windows

int main() {
    
    for (int i = 0; i < 10; i++) {
        sleep(1);
        printf("%d\n", i);
    }

    for (int i = 0; i < 10; i+=2) {
        printf("%d\n", i);
    }
    return 0;
}