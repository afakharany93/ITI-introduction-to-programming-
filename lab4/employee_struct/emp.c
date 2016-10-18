#include <stdio.h>
#include <conio.h>
#include <string.h>

#define EMP_NO 4
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

struct employee 
{
	int salary;
	int deduction;
	int bonus;
	int total;
	char name[10];
};

void main(void)
{
	int emp_no = 0;
	unsigned char accessed[EMP_NO] = {0};
	struct employee e_arr[EMP_NO];
	int pos = 0, counter = 0, terminate = 0;
	char menu[MENU_ITEMS][50] = {"New/Edit Emplyee data", "Display EMplyee Data", "Exit"}, ch;
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
						puts("Enter Emplyee number: ");
						scanf("%d", &emp_no);
						puts("Enter Emplyee Data ");
						puts("NAME :");
						flushall();
						gets(e_arr[emp_no].name);
						puts("Salary :");
						scanf("%d", &e_arr[emp_no].salary);
						puts("Deduction :");
						scanf("%d", &e_arr[emp_no].deduction);
						puts("Bonus :");
						scanf("%d", &e_arr[emp_no].bonus);
						e_arr[emp_no].total = e_arr[emp_no].salary - e_arr[emp_no].deduction + e_arr[emp_no].bonus;
						accessed[emp_no] = 1;
						break;
					case 1 :
						clrscr();
						puts("Enter Emplyee number: ");
						flushall();
						scanf("%d", &emp_no);
						if(accessed[emp_no])
						{
							printf("\nName : %s", e_arr[emp_no].name);
							printf("\nsalary : %d", e_arr[emp_no].salary);
							printf("\nDeduction : %d", e_arr[emp_no].deduction);
							printf("\nBonus : %d", e_arr[emp_no].bonus);
							printf("\nTotal : %d", e_arr[emp_no].total);
						}
						else
						{
							printf("\nno data for employee");
						}
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