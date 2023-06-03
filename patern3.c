#include<stdio.h>
#include<conio.h>
int main()
{int i,j,x,n;
printf("enter the no:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
x=n;
for(j=1;j<=i;j++)
{printf(" %d",x--);
}
printf("\n");
}
}
