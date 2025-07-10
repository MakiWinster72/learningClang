#include <stdio.h>

int main() {
    FILE *pFILE = fopen("input.txt", "r");
    char buffer[1024] = {0};

    if(pFILE == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), pFILE) != NULL) {
        printf("%s", buffer);
    }

    fclose(pFILE);

    return 0;
}