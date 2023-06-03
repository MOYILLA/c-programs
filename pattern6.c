#include<stdio.h>
int main()
{int i,j,n,y;
printf("enter n:");
	scanf("%d",&n);
	int x=n;

	for(i=1;i<=2*n-1;i++)
	{for(j=1;j<=2*n-1;j++)
	{if(i==1||j==1||i==2*n-1||j==2*n-1)
	printf(" %d",n);
	else if(i==2 && j!=1 && j!=2*n-1)
	printf(" %d",n-1);
	else if(i==2*n-2 &&j!=1 &&j!=2*n-1)
	printf(" %d",n-1);
	else if(i==3 &&(j==2||j==4))
	printf(" %d",n-1);
	else if(i==3&&j==3)
	printf(" %d",n-2);
	
	}
	printf("\n");
	 }
	
	
	}
	

