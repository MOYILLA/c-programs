#include<stdio.h>
#include<conio.h>
int main()
{int i,j,k,n,x;
char ch;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   x=1;
		for(j=1;j<=n-i;j++)
		{printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			
			if(k<i)
			{printf("%d",x++);
			}
			else
			{printf("%d",x--);
			}
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{ch='a';
			for(j=1;j<=n-i;j++)
	         	{printf(" ");
		        }
		for(k=1;k<=2*i-1;k++)
		{
			if(k<i)
			{printf("%c",ch++);
			}
			else
			printf("%c",ch--);
		}
		
		printf("\n");
	}
	
}

