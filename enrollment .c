#include <stdio.h>
#include<string.h>

int main()
{
    int  enrollment_no;
    char password[20];
    char name[20];
printf("Enter your name :");
scanf("%s",name);
    printf("Enter the password: ");
    scanf("%s", password);

    if (strcmp(password,"1234567890")==0)
    {
        printf("Enter the enrollment number: ");
        scanf("%d", &enrollment_no);

        
        printf("Your enrollment number is %d\n",enrollment_no);
      printf("your name is %s",name);}
    else
    {
        
        printf("\aWrong password!\n");
    }

    return 0;
}