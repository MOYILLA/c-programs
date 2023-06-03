#include<stdio.h>
#include<conio.h>
int main()
{int i,j,n;
printf("enter the no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{if(i==j|| i+j==n+1)
{printf("%d",i);
}
else
{printf(" ");
}
}printf("\n");
}
}
