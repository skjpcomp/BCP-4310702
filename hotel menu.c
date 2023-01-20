#include<stdio.h>
#include<conio.h>
int main()
{
    char choice;
    printf("\n ************Welcome to our Hotel************");
    printf("\n Enter your Choice");
    scanf("%d",&choice);
    printf("\n 1.Punjabi Dish");
    printf("\n 2.Gujrati Dish");
    printf("\n 3.South Indian Dish");
    printf("\n 4.Exit");
    
    switch(choice)
    {
    case 1:
        printf("\n You have choosen Punjabi Dish");
        printf("\n We have chole Bhature\n,Paneer Tikka\n, Chicken Tikka\n");
        break;
    case 2:
        printf("\n You have choosen Gujrati Dish");
        printf("\n We have Dhokla,Thepla,Fafda");
        break;
    case 3:
        printf("\n You have choosen South Indian Dish");
        printf("\n We have Dosa\n,uttapa\n,");
        }
        }