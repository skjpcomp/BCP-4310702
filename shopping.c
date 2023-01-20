#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    char address[100];
    char payment[20];
    char email[100];
    int phone;
    int age;
    
    int i,j;

    printf("Enter email : ");
    gets(email);

    for(i=0; email[i]!='@'; i++);

    for(j=0; email[j]!='.'; j++);

    if(i<j)
        printf("Valid\n");
    else
        printf("Invalid\n");
        
    
    printf("Enter your name:\n ");
    scanf("%s", name);
    
    printf("Enter your address:\n ");
    scanf("%s", address);
   
    printf("Enter your phone number:\n ");
    scanf("%d", &phone); 
 
    
    printf("\nName: %s", name);
    printf("\nAddress: %s", address);
    
    printf("Enter product name:\n ");
    scanf("%s", name);
    
    printf("Enter your address:\n ");
    scanf("%s", address);
    
    printf("Enter your phone number:\n ");
    scanf("%d", &phone);
    
    printf("Enter mode of payment :\n ");
    scanf("%s", payment);
    
    printf("\nName: %s", name);
    printf("\nAddress: %s", address);
 printf( "\nmodeofpayment: %s",payment );
    
    return 0;
}