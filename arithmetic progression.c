#include <stdio.h> #include <math.h>

void main(){

int n1,df,n2,i,ln; int s1=0;

printf("\n\n Find out the sum of A.P. series : \n"); 
printf("-----------------------------------------\n") ;

printf("Input the starting number of the A.P. series: ");

scanf("%d",&n1);

printf("Input the number of items for the A.P. series: ");

scanf("%d",&n2); 

printf("Input the common difference of A.P. series: ");
scanf("%d",&df);

s1 = ( n2 *( 2 * n1 + ( n2 -1 )* df ) )/ 2;
ln = n1+ (n2-1) *df;

printf("\nThe Sum of the A.P. series are : \n");

for(i=n1;i<=ln; i= i + df ){

if (i != ln){ printf("%d",1);
}
else

printf("%d = %d \n\n",i,s1);
}}