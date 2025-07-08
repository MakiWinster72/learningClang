#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); // seed the random number generator
    int randNum = rand() % 2;


    printf("Random number is %d\n", randNum);

    return 0;
}