#include<stdio.h>
int main()
{int  a[100],i,j,n;
int min,max;
printf("enter size:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
for(i=1;i<n;i++)
{if(max<a[i])
{max=a[i];
}
if(min>a[i])
{min=a[i];
}
}

printf("%d %d",min,max);
}
