#include <stdio.h>
#include <conio.h>

void main(void)
{
	char ch, arr[10];
	clrscr();
	do
	{
		flushall();
		printf("\n press a key to test: ");
		ch = getche();
		if (ch == NULL)
		{
			ch = getch();
			printf("\n The key you pressed is an extended key with ascii code: NULL+%d", ch);
		}
		else
		{
			printf("\n the key you pressed is a normal key with ascii code: %d", ch);
		}
		printf("\nTo loop enter any character, to exit enter \"exit\" \n");
		gets(arr);
	}while(strcmp(arr,"exit"));
	getch();
}