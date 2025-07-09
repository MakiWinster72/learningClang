#include <stdio.h>
#include <ctype.h>


int main() {
    // Quiz Game;

    // 定义问题数组
    char questions[][100] = {"What is the largest planet in solar system?\n",
                             "What is the hottest planet?\n",
                             "What plant has the most moons?\n",
                             "地球是平的吗\n"};

    // 定义选项数组
    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Earth\nD. Mars\n",
                           "A. Venus\nB. Mercury\nC. Earth\nD. Mars\n",
                           "A. Jupiter\nB. Saturn\nC. Earth\nD. Mars\n",
                           "A. 是\nB. 不是\nC. 不知道\nD. 未知\n"};

    // 定义答案数组
    char answerKey[] = {'A', 'B', 'B', 'B'};
    // 计算问题数量
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++) {
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your answer: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answerKey[i]) {
            score++;
            printf("\nCorrect!\n");
        }else {
            printf("\nIncorrect!\n");
        }
    }

    printf("\nYour score is %d/%d\n", score, questionCount);

    return 0;
}