#include<stdio.h>
int main()
{
int i,len;
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
len=i;
for(i=len;i>=0;i--)
{printf("%c",a[i]);
}
}
