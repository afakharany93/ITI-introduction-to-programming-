#include<stdio.h>

void main (void)
{
	char hexa;
	printf("\nPlease input the char you wish to know its hexadecimal code \n");
	scanf("%c", &hexa);
	printf("The hexadecimal code is: %x \npress any key to exit", hexa);
	getch();
}