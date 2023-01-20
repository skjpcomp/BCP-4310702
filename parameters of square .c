#include<stdio.h>

int main()
{
   int side;
    printf("Enter the side : ");
    scanf("%d", &side);
    int perimeter = 4*side;
    int area = side*side;
    printf("Perimeter of square : %d\n", perimeter);
    printf("Area of square : %d\n", area);
    return 0;
}