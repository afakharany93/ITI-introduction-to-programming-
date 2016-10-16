#include<stdio.h>

void main (void)
{
	char choice;
	printf("Please ebter your choice: \n");
	printf("a -> Say \"Good Morning\"\n");
	printf("b -> Say \"Good Evening\"\n");
	printf("c -> Exit\n");
	do
	{
		scanf("%c",&choice);
		fflush(stdin); //search for flushall
		switch(choice)
		{
			case 'a':
				printf("Good Morning \n");
				break;
			case 'b' :
				printf("Good Evening \n");
				break;
			case 'c':
				printf("Press any key to exit \n");
				break;
			default :	
				printf("PLease ENter a valid input \n");
				break;
		}
	}while(choice != 'c');

	getch();
}