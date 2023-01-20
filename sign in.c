#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    char address[100];
    char course[20];
    int age;
    int phone;
    
    printf("Enter your name:\n ");
    scanf("%s", name);
    
    printf("Enter your address:\n ");
    scanf("%s", address);
    
    printf("Enter your age: \n");
    scanf("%d", &age);
    
    printf("Enter your phone number:\n ");
    scanf("%d", &phone);
    
    printf("Enter the course you want to sign up for:\n ");
    scanf("%s", course);
    
    printf("\nName: %s", name);
    printf("\nAddress: %s", address);
 printf( "\ncourse: %s", course);
    
    return 0;
}