#include<stdio.h>
int main()
{int i,j,n,x;
scanf("%d",&n);
x=n;
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("%d",x);
	
	}
		x--;
	printf("\n");
}
}
