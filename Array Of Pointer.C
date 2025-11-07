//  array of pointer

#include<stdio.h>
#include<conio.h>
void main()
{
	char *names[]={"Prince","Vaibhav","Viraj","Varshit","Deep"};
	int i;
	clrscr();
	printf("\n Names Are:-");
	for(i=0;i<5;i++)
	{
	printf("\n%s",names[i]);
	}
	getch();
}