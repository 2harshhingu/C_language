#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();
	printf("Enter the value of  a : ");
	scanf("%d",&a);
	printf("Enter the value of  b : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("-------------------------------\n");
	printf("After swapping a is = %d\n",a);
	printf("After swapping b is = %d",b);
	getch();
}

