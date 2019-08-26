#include<stdio.h>
#include<conio.h>
int convert(int);
void main()
{
	int dec,bin;
	clrscr();
	printf("Enter the binary number:\n");
	scanf("%d",&bin);
	dec=convert(bin);
	printf("The decimal equivalent of %d is %d\n",bin,dec);
	getch();
}
int convert(int bin)
{
	if(bin==0)
	{
		return 0;
	}
	else
	{
		return(bin%10+2*convert(bin/10));
	}
}