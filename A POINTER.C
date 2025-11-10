// array of pointer

#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,c=30;
	int *arr[10];
	int i;
	clrscr();
	arr[0]=&a;
	arr[1]=&b;
	arr[2]=&c;

	printf("\n Display Value using array pointer:");
	for(i=0;i<3;i++)
	{
	printf("\n%d",*arr[i]);
	}
	getch();
}
