#include <stdio.h>

int main() {

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "BOOTY BOOTY BOOTY\nROCKIN";


    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("FILE was written successfully");



    fclose(pFile);


    return 0;
}