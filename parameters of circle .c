#include<stdio.h>

int main()
{
   int radius;
    float circumference, area;
    printf("Enter the radius of circle: ");
    scanf("%d", &radius);
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;
    printf("Circumference of circle = %.2f units\n", circumference);
    printf("Area of circle = %.2f square units", area);
    return 0;
    
}