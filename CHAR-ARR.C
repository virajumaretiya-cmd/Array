// char array

#include<stdio.h>
#include<conio.h>
void main()
{
	char arr[]={'a','b','c','d','e','f'};
	int i;
	clrscr();
	for(i=0;i<6;i++)
	{
	printf("arr[%d]=%c\n",i,arr[i]);
	}
	getch();
}