#include<stdio.h>

int main()
{
    char c;
    printf("Enter a character: ");
    c = getchar();

    printf("You entered %c character\n", c);

    printf("Next five characters are : \n");
    for (int i = 0; i < 5; i++) {
        c++;
        putchar(c);
        printf("\n");
    }

    return 0;
}








