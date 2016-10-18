
#include<stdio.h>
#include<conio.h>
#define N 9

int number_of_digits(int number);


void main (void)
{
	int offset = number_of_digits(N*N);
	int col = (N-1) / 2;
	int row = 0;
	int value = 1;
	//int count_row = 0, count_col = 0;
	clrscr();
	gotoxy(offset*(1+col), row+1);
	printf("%d", value);

	while(value < N*N)
	{
		value++;
		if(value % N == 0)
		{
			row = (++row) ;
			if(row> N-1) row = 0;
		}
		else
		{
			row = (--row) ;
			col = (--col) ;
			if(row<0) row = N-1;
			if(col<0) col = N-1;
		}
		gotoxy(offset*(1+col), row+1);
		printf("%d", value);
	}
	getch();
}

int number_of_digits(int number)
{
	int count = 0;
	float check = 0 ;

	do
	{
		count ++;
		check = number/( 10^(count));
	}while(  check > 1 );

	return count;
}