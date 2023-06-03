#include<stdio.h>
int main()
{int a[100],i,j,n;

scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{if(a[i]==a[j]&&a[i]!=-1)
{a[i]=-1;
a[j]=-1;
}
}
if(a[i]!=-1)
{printf("\n%d",a[i]);
}

}
}
