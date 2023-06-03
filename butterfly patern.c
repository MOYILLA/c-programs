#include<stdio.h>
#include<conio.h>
int main()
{int i,j,k,n,sp;

printf("enter the no:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{printf("*");
}
sp=2*n-2*i;
for(k=1;k<=sp;k++)
{printf(" ");
}
//sp=sp-2;
for(j=1;j<=i;j++)
{printf("*");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{for(j=1;j<=i;j++)
{printf("*");
}
sp=2*n-2*i;
for(k=1;k<=sp;k++)
{printf(" ");
}
//sp=sp-2;
for(j=1;j<=i;j++)
{printf("*");
}
printf("\n");
}
}
