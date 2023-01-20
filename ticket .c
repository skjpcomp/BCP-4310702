#include<stdio.h>
#include<conio.h>
int main()
{
char ticet; 
printf("**********welcome to Indian railways booking platform*******\n");
printf("\tyour Entered train is Awadh Express\n");
printf("\t1 is for 1st AC \n");
printf("\t2 is for 2nd AC\n");
printf("\t3 is for 3rd AC\n");
printf("\t4 is for CC. AC\n");
printf("\t5 is for SL. \n");

ticet=getche();
switch(ticet)
{ 
case '1': 
printf("\nyou have chosen the first AC facility\n\t you have to pay 5000₹");
break;

case '2':
printf("\nyou have chosen the second AC facility\n\tyou have to pay 2930₹");
break;

case '3':
printf("\nyou have chosen the third tire AC faci6\n\tyou have to pay 2015₹");
break;
case'4':
printf("\nyou have chosenthe AC chair car\n\tyou have to pay 1645₹\n");
break;
case '5':
printf("\n you have chosen the SL class\n\t you have to pay 760₹\n");
}  
   
}