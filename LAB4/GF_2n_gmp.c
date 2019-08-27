#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
	int p,n;
	printf("Enter values of p and n:");
	scanf("%d", &p);
	scanf("%d", &n);
	int res=1 ,t=n;

	while(t--)
	{
		res*=2;
	}
	printf("0 \n");

	for(int i=0; i<res; i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			if((1<<j) & i)
			{
				int flag=0;
				if(j==0)
				{
					printf("1");
				}
				else
				{
					flag=1;
					printf("x%d",j);
				}
				if(flag==1)
				printf("+");
			}
		}
	}
	printf("\n");
}
