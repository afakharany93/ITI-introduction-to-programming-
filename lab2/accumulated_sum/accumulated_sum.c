#include<stdio.h>

void main (void)
{
	int number, sum = 0;
	printf("Please Enter an number\n");
	scanf("%d",&number);
	fflush(stdin);
	sum += number;
	do
	{
		printf("Please Enter an number\n");
		scanf("%d",&number);
		fflush(stdin);
		sum += number;
	}while(sum < 100);

	printf("Sum is %d\nPress any key to exit\n", sum);
	getch();
}