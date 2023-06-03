#include<stdio.h>
int main()
{
	int i,j,k,n;
	char ch;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ch='A';
		for(j=n-i;j>=1;j--)
		{printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{printf("%c",ch++);
		}
		printf("\n");
	}
}
