#include<stdio.h>
#include<string.h>
char mstr[100],sstr[100],rstr[100],dstr[100];
int i=0,j=0,k=0,l1,l2,found=0,x=0,n=0;
void read();
void display();
void check();
void copy();
void main()
{
	printf("Enter the strings:\n");
	read();
	printf("Strings are:\n");
	display();
	check();
	getch();
}
void read()
{
	gets(mstr);
	gets(sstr);
	gets(rstr);
}
void display()
{
	puts(mstr);
	puts(sstr);
	puts(rstr);
}
void check()
{
	l1=strlen(sstr);
	l2=strlen(rstr);
	while(mstr[i]!='\0')
	{
		if(sstr[j]=='\0')
		{
			j=0;
		}
		if(mstr[i]==sstr[j])
		{
			i++;
			j++;
			found=1;
			if(j==l1)
			{
				while(k<l2)
				{
					dstr[x]=rstr[k];
					x++;
					k++;
				}
				k=0;
				j=0;
				n=i;
			}
		}
		else
		{
			if(found==1)
			{
				j=0;
				found=0;
				while(n<i)
				{
					dstr[x]=mstr[n];
					x++;
					n++;
				}
			}
			else
			{
				dstr[x]=mstr[n];
				x++;
				n++;
				i++;
			}
		}
	}
	dstr[x]='\0';
	if(strcmp(dstr,mstr)==0)
	{
		printf("Sub string is not present in main string\n");
	}
	else
	{
		printf("String after replacing is:\n");
		strcpy(mstr,dstr);
		puts(mstr);

}	}