#include<stdio.h>
#include<limits.h>
int main(){
   printf("DATA TYPE\t\t RANGE\n");
   printf("-----------\t\t---------\n");
   printf("short min\t\t%d\n",SHRT_MIN);
   printf("short max int\t\t%d\n",SHRT_MAX);
   printf("int min\t\t\t%d\n",INT_MIN);
   printf("int max\t\t\t%d\n",INT_MAX);
   printf("Char min\t\t%d\n",CHAR_MIN);
   printf("Char max\t\t%d\n",CHAR_MAX);
   printf("long min\t\t%ld\n",LONG_MIN);
   printf("long max\t\t%ld\n",LONG_MAX);
   printf("unsigned char\t\t%u\n",UCHAR_MAX);
   printf("unsigned long\t\t%lu\n",ULONG_MAX);
   printf("unsigned int\t\t%u\n",UINT_MAX);
   printf("unsigned short\t\t%u\n",USHRT_MAX);
}