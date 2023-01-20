#include<stdio.h>

int main()
{
   float a, area;

    printf("Enter side length of square: ");
    scanf("%f", &a);

    // Calculate area of square
    area = a * a;

    // Print area of square
    printf("Area of square = %.2f sq. units", area);

    return 0;
    
}