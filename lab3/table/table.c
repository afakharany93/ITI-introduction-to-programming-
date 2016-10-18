#include <stdio.h>
#include <conio.h>

#define SIZE_ARR 10
#define ROW_SIZE 5
#define COL_SIZE 6
#define MAX_UNSIGNED_VALUE (unsigned)(-1)
#define MAX_SIGNED_VALUE (MAX_UNSIGNED_VALUE>>1)
#define COL_OFFSET 10

void main (void)
{

	int counter = 0;
	int arr[ROW_SIZE-2][COL_SIZE-2];
	int row_counter = 0;
	int col_counter = 0;
	float avg[COL_SIZE-2] = {0};
	int sum[ROW_SIZE-2] = {0};
	clrscr();
	for(counter = 1; counter < ROW_SIZE-1 ; counter++)
	{
		gotoxy(1, counter+1);
		printf("Student%d", counter);
	}
	for(counter = 1; counter < COL_SIZE-1 ; counter++)
	{
		gotoxy(COL_OFFSET*(counter+1), 1);
		if(counter==1)
		{
			printf("OS", counter);
		}
		else if(counter==2)
		{
			printf("C", counter);
		}
		else if(counter==3)
		{
			printf("C++", counter);
		}
		else if(counter==4)
		{
			printf("Labview", counter);
		}
	}

	gotoxy(COL_OFFSET*(COL_SIZE), 1);	
	textattr(4+0+128 );
	cprintf("Sum");

	gotoxy(1, ROW_SIZE);	
	textattr(128 | (GREEN));
	cprintf("Avg");

	for(col_counter = 0; col_counter < COL_SIZE-2; col_counter++)

	{
		for (row_counter = 0; row_counter < ROW_SIZE-2; row_counter++)
		{
			gotoxy(COL_OFFSET*(col_counter+2), row_counter+2);
			scanf("%d", &arr[row_counter][col_counter]);
			fflush(stdin);

			gotoxy(COL_OFFSET*(col_counter+2), ROW_SIZE);
			avg[col_counter] += (float)arr[row_counter][col_counter]/(float)(ROW_SIZE-2);
			printf("%0.2f", avg[col_counter]);
			
			gotoxy(COL_OFFSET*(COL_SIZE), row_counter+2);	
			sum[row_counter] += arr[row_counter][col_counter];
			printf("%d", sum[row_counter]);
		}
	}

	
	getch();
}