#include<stdio.h>
void main()
{
	int sum=0,n,i;
	printf("enter the number of integers\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			sum=sum+i;
		}
	}
	printf("sum of the %d numbers divisible by 3 is %d\n",n,sum);
	getch();
}