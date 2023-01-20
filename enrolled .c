#include <stdio.h>

int main()
{
    int  enrollment_no;
    char password[10];

    printf("Enter the password: ");
    scanf("%d", &password);

    if (password==[10])
    {
        printf("Enter the enrollment number: ");
        scanf("%d", &enrollment_no);

        printf("Your enrollment number is %d\n",&enrollment_no);
    }
    else
    {
        printf("Wrong password!\n");
    }

    return 0;
}