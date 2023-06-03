#include<stdio.h>
int main()
{
int i,c=0;
char a[20];
printf("enter the string:"); 
//scanf("%s",a);
gets(a);
//scanf("%[^\n]s",a);
//printf("\n given string:%s",a);
for(i=0;a[i]!='\0';i++)
{if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
{printf("\n%c",a[i]);
c++;
}

}
printf("\n%d",c);
}
