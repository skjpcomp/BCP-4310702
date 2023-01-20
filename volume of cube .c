#include<stdio.h>

int main()
{
    int side, volume;
    printf("Enter length of a side of a cube: ");
    scanf("%d", &side);
    volume = side*side*side;
    printf("Volume of cube: %d", volume);
    return 0;


}