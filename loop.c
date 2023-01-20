#include<stdio.h>

int main()
{
char c='a';
int num;
while(c!='y')
{ printf("enter i. ");
scanf("%d",&num);
printf("you enter%d\n",num);
printf("do you want to continue(y/n) ? :");

c=getchar();
}

}