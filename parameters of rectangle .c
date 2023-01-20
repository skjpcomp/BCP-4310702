#include<stdio.h>

int main()
{
 int l,b,p,a;
    printf("Enter length and breadth of rectangle");
    scanf("%d%d",&l,&b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter is %d \n Area =is %d",p,a);
}