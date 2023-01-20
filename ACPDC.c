#include<stdio.h>
int main()
{
int  age, marks;
    char course[20],pincode[6];

    printf("Enter your pincode: ");
    scanf("%s", &pincode);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter the course you want to apply for: ");
    scanf("%s", course);

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (pincode>=6 && age >= 14 , marks >= 35)
    {
        printf("Congratulations! You are eligible to apply for %s course.\n", course);
    }
    else if (pincode >=6 )
    {
        printf("Sorry! You are not eligible to apply for %s course. Please enter the correct pincode.\n", course);
    }
    else if (age >= 14)
    {
        printf("Sorry! You are not eligible to apply for %s course. Please enter the correct age.\n", course);
    }
    else
    {
        printf("Sorry! You are not eligible to apply for %s course. Please enter the correct marks.\n", course);
    }

    return 0;
}