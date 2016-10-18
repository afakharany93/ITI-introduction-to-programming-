#include <stdio.h>
#include <conio.h>

#define SIZE_ARR 10
#define ROW_SIZE 3
#define COL_SIZE 3
#define MAX_UNSIGNED_VALUE (unsigned)(-1)
#define MAX_SIGNED_VALUE (MAX_UNSIGNED_VALUE>>1)

void main (void)
{
	int arr[ROW_SIZE][COL_SIZE];
	float avg[COL_SIZE] = {0};
	int row_counter = 0;
	int col_counter = 0;
	printf("Please enter array elemntes sequentially\n");
	for (row_counter = 0; row_counter < ROW_SIZE; row_counter++)
	{
		for(col_counter = 0; col_counter < COL_SIZE; col_counter++)
		{
			scanf("%d", &arr[row_counter][col_counter]);
			fflush(stdin);
			avg[col_counter] += (float)arr[row_counter][col_counter]/(float)COL_SIZE;
		}
	}
	printf("You Entered: \n");
	for (row_counter = 0; row_counter < ROW_SIZE; row_counter++)
	{
		for(col_counter = 0; col_counter < COL_SIZE; col_counter++)
		{
			printf("%d ",arr[row_counter][col_counter]);
		}
		printf("\n");
	}
	printf("\n avg of each col is: \n");
	for (row_counter = 0; row_counter < ROW_SIZE; row_counter++)
	{
		printf("%f, ", avg[row_counter]);
	}
	getch();
}
