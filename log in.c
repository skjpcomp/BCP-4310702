

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char email[100];
    int i,j;

    printf("Enter email : ");
    gets(email);

    for(i=0; email[i]!='@'; i++);

    for(j=0; email[j]!='.'; j++);

    if(i<j)
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;
}
