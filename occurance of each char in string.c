#include<stdio.h>
int main()
{
int i,j,c;
char a[20];
printf("enter the string:"); 
//scanf("%s",a);
gets(a);
for(i=0;a[i]!='\0';i++)
{c=1;
for(j=i+1;a[j]!='\0';j++)
{if(a[i]==a[j])
{c++;
a[j]='1';
}
}
if(a[i]!='1')
printf("%c%d",a[i],c);
}

}
