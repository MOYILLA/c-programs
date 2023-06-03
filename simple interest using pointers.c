#include<stdio.h>
int main()
{int p,t,r,i;
int *x,*y,*z,*w;
x=&p;y=&t;z=&r;w=&i;
printf("enter principle,time,rate:");
scanf("%d %d %d",x,y,z);
*w=(*x**y**z)/100;
printf("simple interest:");
printf("%d",*w);
}
