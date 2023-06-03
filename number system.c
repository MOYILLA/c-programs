#include<stdio.h>
int main()
{
	int a=012+021+0x15+0xA;
	printf("%d  %o %x",a,a,a);
	a=015+023+0xa1+0xD+5;
	printf("\n%d  %o %x",a,a,a);
	
}
