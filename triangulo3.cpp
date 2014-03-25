#include<stdio.h>
int main()
{
	
	int i;
	int f;
	int j;
	for(i=6;i>0;i--)
	{
	
	for(f=0;f<i;f++)
	{
		char a='*';
		printf(" ",a);
	}
		for(j=6;j>f;j--)
	{
		char a='*';
		printf("*",a);
	}
	printf("\n");
	}
return 0;
}
