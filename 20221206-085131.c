#include <stdio.h>
#include <stdlib.h>

int main()
{
    int octal, hexadecimal;

    printf("Input an octal number: ");
    scanf("%d", &octal);

    hexadecimal = 0;

    
    while (octal != 0)
    {
        hexadecimal = (hexadecimal * 8) + (octal % 10);
        octal /= 10;
    }

    printf("Equivalent hexadecimal number is: %X\n", hexadecimal);

    return 0;
} 