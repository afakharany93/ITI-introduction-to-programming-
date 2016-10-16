#include<stdio.h>

void main (void)
{
	char ascii;
	printf("\nPlease input the char you wish to know its ascii code \n");
	scanf("%c", &ascii);
	printf("The ASCII code is: %d \npress any key to exit", ascii);
	getch();
}