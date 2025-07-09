#include <stdio.h>
#include <string.h>

int main() {
    // Arrays of Strings
    char fruits[][10] = {"Apple", "Banana", "Cherry"};

    char fruits2[][10] = {
        {'A', 'p', 'p', 'l', 'e', '\0'},
        {'B', 'a', 'n', 'a', 'n', 'a', '\0'},
        {'C', 'h', 'e', 'r', 'r', 'y', '\0'}
    };

    int size = sizeof(fruits) / sizeof(fruits[0]);

    for(int i = 0; i < size; i++) {
        printf("%s\n", fruits[i]);
    }

    return 0;

}

void exercise() {
    char names[3][25] = {0};

    int rows = sizeof(names) / sizeof(names[0]);

    printf("Enter a name: ");
    fgets(names[0], sizeof(names[0]), stdin);
    names[0][strlen(names) - 1] = '\0';

    printf("%s\n", names[0]);
}