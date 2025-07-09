#include <stdio.h>

int main() {
    // array = 存储相同的数据类型的集合
    // array = 一组连续的内存空间
    // array = 可以通过下标访问

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    
    int arr3[5];
    for (int i = 0; i < 5; i++) {
        arr3[i] = i + 1;
    }
    arr3[0] = 1;
    

    // 访问数组中的元素
    printf("%d\n", arr1[0]);
    printf("%d\n", arr1[100]); // 数组越界，无报错，但是会访问到其他内存空间的数据

    printf("==========\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n"); 

    printf("==========\n");
    printf("%d\n", sizeof(arr1)); // 20
    printf("%d\n", sizeof(arr1[0])); // 4

    int size = sizeof(arr1) / sizeof(arr1[0]);
    printf("%d\n", size); // 5

    return 0;
}

void inputArray(int arr[], int size) {
        int scores[5] = {0};

    for(int i = 0; i < 5 ; i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    // Print the scores
    for(int i = 0; i < 5; i++) {
        printf("Score %d: %d\n", i, scores[i]);
    }

    return 0;
}