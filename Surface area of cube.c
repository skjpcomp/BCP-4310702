#include<stdio.h>

int main()
{
    float side, surfaceArea;
    printf("Enter the side of cube: ");
    scanf("%f", &side);
    surfaceArea = 6 * side * side;
    printf("Surface area of cube = %.4f sq.units", surfaceArea);
    return 0;
    
}