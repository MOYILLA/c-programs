#include<stdio.h>
int main()
{int i,j,n,x;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{x=n;
	for(j=1;j<=n;j++)
	{
		if(j==1||i==j||i==n)
		{printf(" %d",x);
		}
		else
		{printf("  ");
		}
		x--;
	}
	printf("\n");
}
}
