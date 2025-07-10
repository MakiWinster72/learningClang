#include <stdio.h>
#include <string.h>

int main() {
    //MAD LIBS GAME
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    
    printf("Enter a adjective(describe something): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    //fgets函数会将换行符也读入，所以需要将其替换为字符串结束符
    adjective1[strlen(adjective1) - 1] = '\0';
    printf("Enter a noun(animal or person): ");
    scanf("%s", noun);
    //scanf函数会将换行符留在输入缓冲区中，需要使用getchar()将其取出
    getchar();
    printf("Enter a adjective(describe something): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2) - 1] = '\0';
    printf("Enter a verb(ending w/ -ing)");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';
    printf("Enter a adjective(describe something): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    printf("Once upon a time, there was a %s %s. It was %s and %s. It loved to %s. It was %s.", adjective1, noun, adjective2, adjective3, verb, adjective3);
    printf("\n");
    printf("The end.");

    return 0;
}
