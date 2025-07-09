#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
}Car;

int main() {

   
    // Car car1 = {"Toyota", 2025, 32000};
    // Car car2 = {"Honda", 2020, 25000};
    // Car car3 = {"Ford", 2015, 18000};

    // printf("Model: %s, Year: %d, Price: %d\n", car1.model, car1.year, car1.price); // %s is for strings, %d is for integers
    // printf("Model: %s, Year: %d, Price: %d\n", car1.model, car1.year, car1.price);
    // printf("Model: %s, Year: %d, Price: %d\n", car2.model, car2.year, car2.price);

    Car cars[] = {{"Toyota", 2025, 32000}, {"Honda", 2020, 25000}, {"Ford", 2015, 18000}};

    int number = sizeof(cars) / sizeof(Car); 
    for (int i = 0; i < number; i++) {
        printf("Model: %s, Year: %d, Price: %d\n", cars[i].model, cars[i].year, cars[i].price);
    }
    return 0;
}