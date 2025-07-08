#include <stdio.h>
#include <math.h>

int main() {
    double radius = 0.0;
    double area = 0.0;
    double suffaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;


    printf("Enter the radius: ");
    scanf("%lf" ,&radius);

    area = PI * pow(radius, 2);
    suffaceArea = 4 * PI * pow(radius, 2);
    volume = (4/3) * PI * pow(radius, 3);

    printf("Area: %lf", area);
    printf("\nSurface Area: %lf\n", suffaceArea);
    printf("Volume: %lf\n", volume);

    return 0;
}