#include <stdio.h>

int main()
{
    int n, i;
   float num,t; 
    printf("Enter an integer:\a ");
    scanf("%d",&n);

  for(i=1;i<=10;++i)  {
        printf("%d * %d = %d \n", n, i, n*i);
    }
        printf("enter a decimal:");
        scanf("%f",&num);   
        for(t=1;t<=10;++t){
        printf("%f * %f = %f\n",num,t,num*t);
        }
}