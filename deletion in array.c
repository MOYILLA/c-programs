O#include<stdio.h>
int main()
{int a[100],i,n,pos,ele;
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter element:");
scanf("%d",&ele);
//deletion logic
for(i=0;i<n;i++)
{if(ele==a[i])
{pos=i;
break;
}
}
for(i=pos;i<n;i++)
{a[i]=a[i+1];
}
n--;
printf("displaying array elemnts:");
for(i=0;i<n;i++)
{printf(" %d",a[i]);
}
}
