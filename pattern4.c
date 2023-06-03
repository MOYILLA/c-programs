#include<stdio.h>
#include<conio.h>
int main()
{int i,j,n,k,dif;
int  ch;
printf("enter the no:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{ch=i;
dif=n-1;
for(j=1;j<=i;j++)
{printf(" %d",ch);
ch=ch+dif;
dif--;
}


printf("\n");
}
}
    
