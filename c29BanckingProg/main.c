#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    // 定义用户选择的变量
    int choice = 0;
    // 定义用户余额的变量
    float balance = 0.0f;

    // 打印欢迎信息
    printf("Welcome to the bank!\n");

    // 循环，直到用户选择退出
    do{
        // 打印菜单选项
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        // 提示用户输入选择
        printf("Enter your choice: ");
        // 读取用户输入的选择
        scanf("%d", &choice);

        // 根据用户选择执行相应的操作
        switch(choice) {
            case 1:
                // 查询余额
                checkBalance(balance);
                break;
            case 2:
                // 存款
                balance += deposit();
                break;
            case 3:
                // 取款
                balance -= withdraw(balance);
                break;
            case 4:
                // 退出
                printf("Thank you for banking with us!\n");
                break;
            default:
                // 无效选择
                printf("Invalid choice. Please try again.\n");
                break;
        }

    // 当用户选择退出时，退出循环
    }while(choice != 4);

    // 返回0，表示程序正常结束
    return 0;
}

void checkBalance(float balance) {
    printf("\n ur current balance is %.2f\n", balance);
}

float deposit() {

    float amount = 0.0f;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount. Please try again.\n");
        return 0.0f;
    }else if (amount == 0) {
        printf("No amount deposited.\n");
    }else {
        printf("Amount deposited: %.2f\n", amount);
        return amount;
    }
    
}

float withdraw(float balance) {
    float amount = 0.0f;

    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);

    if(amount < 0) {
        printf("Invalid amount. Please try again.\n");
        return 0.0f;
    }else if (amount > balance) {
        printf("Insufficient balance.\n");
        return 0.0f;
    }else {
        printf("Amount withdrawn: %.2f\n", amount);
    }
    return 0.0f;
}