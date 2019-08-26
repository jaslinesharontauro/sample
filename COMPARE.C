#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int array1[10],array2[10],i,n,m,found=0;
	clrscr();
	printf("Enter the size of array1:\n");
	scanf("%d",&n);
	printf("Enter the size of array2:\n");
	scanf("%d",&m);
	printf("Enter the elements of array1:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array1[i]);
	}
	printf("Enter the elments of array2:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&array2[i]);
	}
	if(m!=n)
	{
		printf("Arrays are not equal\n");
	}
	else
	{
		for(i=0;i<m;i++)
		{
			if(array1[i]!=array2[i])
			{
				found=1;
				break;
			}
		}
		if(found==0)
		{
			printf("The arrays are equal\n");
		}
		else
		{
			printf("The arrays are not equal\n");
		}
	}
	getch();
}



