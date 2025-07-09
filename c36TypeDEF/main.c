#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initial[3];

int main() {

    int x = 3;
    int y = 5;
    int z = x + y;

    Number x = 3;
    Number y = 5;
    Number z = x + y;

    String name = "Maki Winster";


    Initial name1 = "SS";
    Initial name2 = "PS";
    Initial name3 = "ST";

    printf("%s\n", name1);
    printf("%s\n", name2);
    printf("%s\n", name3);


    printf("z = %d\n", z);
}