#include<stdio.h>
int main()
{
int i;
char a[20];
printf("enter the string:"); 
//scanf("%s",a);
gets(a);
//scanf("%[^\n]s",a);
printf("\n given string:%s",a);
for(i=0;a[i]!='\0';i++)
{
}
printf("length of string:%d",i);
}
