#include <stdio.h>
#include <conio.h>

#define SIZE_ARR 10
#define MAX_UNSIGNED_VALUE (unsigned)(-1)
#define MAX_SIGNED_VALUE (MAX_UNSIGNED_VALUE>>1)

void main (void)
{
	int arr[SIZE_ARR];
	int counter = 0;
	int min = MAX_SIGNED_VALUE, max = MAX_UNSIGNED_VALUE;
	//read phase
	
	printf("Please enter array elemntes sequentially\n");
	/*
	scanf("%d", &arr[0]);
	fflush(stdin);
	*/

	for (counter = 0; counter < SIZE_ARR; counter++)
	{
		scanf("%d", &arr[counter]);
		fflush(stdin);
		if (arr[counter] < min)
		{
			min = arr[counter];
		}
		else if (arr[counter] > max)
		{
			max = arr[counter];
		}

	}
	printf("Min Value is : %d, Max value is %d\n", min, max);
	getch();

}
