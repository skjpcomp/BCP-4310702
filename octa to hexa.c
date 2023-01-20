#include<stdio.h> 
#include<math.h> 

int octalToHexa(int octal) 
{ 
	int i = 0, decimal = 0, hexaDecimal; 
	while (octal != 0) 
	{ 
		decimal = decimal + (octal % 10) * pow(8, i++); 
		octal = octal / 10; 
	} 

	i = 1; 
	hexaDecimal = 0; 

	while (decimal != 0) 
	{ 
		hexaDecimal = hexaDecimal + (decimal % 16) * i; 
		decimal = decimal / 16; 
		i = i * 10; 
	} 

	return hexaDecimal; 
} 

int main() 
{ 
	int octal; 
	printf("Enter a octal number: ");
	scanf("%d", &octal); 

	printf("Equivalent hexadecimal value: %x", octalToHexa(octal)); 

	return 0; 
}





