#include <stdio.h>
#include <conio.h>

#define MENU_ITEMS 3
//extended
#define UP 		72
#define DOWN 	80
#define HOME	71
#define END		79
//normal
#define ESC		27
#define ENTER	13
//text attributes
#define NORMAL (GREEN) 

void main(void)
{
	int pos = 0, counter = 0, terminate = 0;
	char menu[MENU_ITEMS][10] = {"New", "Display", "Exit"}, ch;
	do
	{
		clrscr();
		//draw current position
		for (counter = 0; counter < MENU_ITEMS; counter++ )
		{
			gotoxy(35, 10+counter*2);
			if(counter == pos)
			{
				textattr(128|(GREEN<<4)|WHITE);
			}
			cprintf("%s", menu[counter]);
			textattr(NORMAL);
		}
		flushall();
		ch = getch();
		switch (ch)
		{
			case ESC:
				terminate = 1;
				break;
			case ENTER:
				switch(pos)
				{
					case 0:
						clrscr();
						puts("New menu");
						getch();
						break;
					case 1 :
						clrscr();
						puts("Display menu");
						getch();
						break;
					case 2 :
						terminate = 1;
						break;
				}
				break;
			case NULL:
				ch = getch();
				switch(ch)
				{
					case UP:
						pos--;
						if(pos<0) pos = 2;
						break;
					case DOWN:
						pos++;
						if (pos>2) pos=0;
						break;
					case HOME:
						pos=0;
						break;
					case END:
						pos = 2;
						break;
				}
				break;
		}

	}while(!terminate);
}