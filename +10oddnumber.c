#include<stdio.h>
int main()
{
    int n,i;
    n=0;   
    for(i=1; i<=20; i=i+2) {  
    if(i%2!=0){
    n=n+i;
        printf("%d %d\n",i,n);
   }
  }
}