#include<stdio.h>
int main()
{int a[100],i,n;
printf("enter size:");
scanf("%d",&n);
printf("enter array elements:\n");
for(i=0;i<n;i++)
{printf("\na[%d]=",i);
scanf("%d",&a[i]);
}
printf("printing special array elements:");
for(i=1;i<n;i++)
{if(a[i-1]%2==0)
printf("\na[%d]=%d",i,a[i]);

}
}
