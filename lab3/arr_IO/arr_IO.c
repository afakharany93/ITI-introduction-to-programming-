#include <stdio.h>
#include <conio.h>

#define SIZE_ARR 10

void main (void)
{
	int arr[SIZE_ARR];
	int counter = 0;
	//read phase
	printf("Please enter array elemntes sequentially\n");
	for (counter = 0; counter < SIZE_ARR; counter++)
	{
		scanf("%d", &arr[counter]);
		fflush(stdin);
	}
	//write phase
	printf("\n You Entered : \n");
	for (counter = 0; counter < SIZE_ARR; counter++)
	{
		printf("%d, ", arr[counter]);
		fflush(stdin);
	}
	getch();
}