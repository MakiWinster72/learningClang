#include <stdio.h>

typedef enum {
    Monday,     // 0  (默认值) ke yi fei lian xu 
    Tuesday,    // 1
    Wednesday,  // 2
    Thursday,   // 3
    Friday,     // 4
    Saturday,   // 5
    Sunday      // 6
} Day;


// ✅ 使用枚举的函数
void print_day_enum(Day day) {
    switch (day) {
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        case Wednesday:
            printf("Today is Wednesday\n");
            break;
        case Thursday:
            printf("Today is Thursday\n");
            break;
        case Friday:
            printf("Today is Friday\n");
            break;
        case Saturday:
            printf("Today is Saturday\n");
            break;
        case Sunday:
            printf("Today is Sunday\n");
            break;
        default:
            printf("Invalid day (enum)\n");
    }
}

// ❌ 不使用枚举的函数，直接用 int
void print_day_int(int day) {
    if (day == 0) {
        printf("Today is Monday\n");
    } else if (day == 1) {
        printf("Today is Tuesday\n");
    } else if (day == 2) {
        printf("Today is Wednesday\n");
    } else if (day == 3) {
        printf("Today is Thursday\n");
    } else if (day == 4) {
        printf("Today is Friday\n");
    } else if (day == 5) {
        printf("Today is Saturday\n");
    } else if (day == 6) {
        printf("Today is Sunday\n");
    } else {
        printf("Invalid day (int)\n");
    }
}

int main() {
    Day today = Monday;
    Day tomorrow = Wednesday;

    // ✅ 使用枚举函数
    print_day_enum(today);
    print_day_enum(tomorrow);

    // ❌ 不使用枚举函数
    print_day_int(0); // Monday
    print_day_int(2); // Wednesday
    print_day_int(8); // 无效示例

    return 0;
}
