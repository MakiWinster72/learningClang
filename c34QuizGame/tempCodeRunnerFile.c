int main() {
    // Quiz Game;

    char questions[][100] = {"What is the largest planet in solar system?\n",
                             "What is the hottest planet?\n",
                             "What plant has the most moons?\n",
                             "地球是平的吗\n"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Earth\nD. Mars\n",
                           "A. Venus\nB. Mercury\nC. Earth\nD. Mars\n",
                           "A. Jupiter\nB. Saturn\nC. Earth\nD. Mars\n",
                           "A. 是\nB. 不是\nC. 不知道\nD. 未知\n"};

    char answerKey[] = {'A', 'B', 'B', 'B'};
    int questionCount = sizeof(questions) / sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for(int i = 0; i < questionCount; i++) {
        printf("%s", questions[i]);
        printf("%s", options[i]);

    }

    return 0;
}