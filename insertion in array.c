#include<stdio.h>
int main()
{int a[100],i,n,elem,pos;
printf("enter size:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter position and element:");
scanf("%d %d",&pos,&elem);
//insertion logic
for(i=n;i>=pos;i--)
{a[i]=a[i-1];
}
a[pos-1]=elem;
n++;
printf("displaying array elemnts:");
for(i=0;i<n;i++)
{printf("%d",a[i]);
}
}

