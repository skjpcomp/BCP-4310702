#include<studio.h>
#include<conio.h>

int main() 

{ 

chat ch; 

printf("Enter any alphabet: "); 

scanf("%d",&ch); 

switch(ch) 

{ 

case 'a': case'A':

printf("A for Apple"); 

break; 

case 'b':

printf("Two"); 

break; 

case 3: 

printf("Three"); 

break; 

case 4: 

printf("Four"); 

break; 

case 5: 

printf("Five"); 

break; 

default: 

printf("Invalid Number"); 

} 

return 0; 

}