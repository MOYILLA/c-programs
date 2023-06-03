#include<stdio.h>
int main()
{int i,j,n,x;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{if(i+j==n+1)
{printf("%d",i);
}
else
printf(" ");
}
for(j=1;j<=n;j++)
{if(i==j)
{printf("%d",i);
}
else
printf(" ");
}
printf("\n");
}
x=n;
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
{if(i==j)
{printf("%d",x);
}
else
printf(" ");
}
for(j=1;j<=n;j++)
{if(i+j==n+1)
{printf("%d",i);
}
else
printf(" ");
}
x--;
printf("\n");
}
}
