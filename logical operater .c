#include <stdio.h>



//Main function
int main() 
{
int num1,num2;
    int result;
    
    //Prompting user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    //Performing logical operations
    result = (num1 > num2) && (num1 != num2);
    printf("(%d > %d) && (%d != %d) is %d\n", num1, num2, num1, num2, result);
    
    result = (num1 < num2) || (num1 == num2);
    printf("(%d < %d) || (%d == %d) is %d\n", num1, num2, num1, num2, result);
    
    result = !(num1 > num2);
    printf("!(%d > %d) is %d\n", num1, num2, result);
    
    //Return 0 to main function
    return 0;
}