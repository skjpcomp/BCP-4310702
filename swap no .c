#include<stdio.h>

int main()
{
    int num1,num2;
	int temp;
	
	printf("Enter the first number : ");
	scanf("%d",&num1);
	
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	printf("Before Swapping : num1 = %d and num2 = %d\n",num1,num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("After Swapping : num1 = %d and num2 = %d\n",num1,num2);
	
	return 0;
    
}