#include<stdio.h>
int main()
{int a,b,c;
int*p,*q,*r;
p=&a;q=&b;r=&c;
printf("enter two numbers:");
scanf("%d %d",p,q);
printf("before swaping a:%d,b:%d",*p,*q);
*r=*p;
*p=*q;
*q=*r;
printf("\nafter swaping swapping a:%d,b:%d",*p,*q);
}
