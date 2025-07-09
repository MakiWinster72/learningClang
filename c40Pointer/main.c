#include <stdio.h> 

void birthday(int *age);

int main() {

    int age = 20;
    int *pAge = &age;

    birthday(pAge); // &age

    return 0;

}

void birthday(int *age) {

    // *age = *age + 1;
    (*age)++; // ()

    printf("Happy birthday! You are now %d\n", *age);
}