#include<stdio.h>
int main()
{
	
	int i;
	int f;
	for(f=0;f<6;f++){
	
	for(i=6;i>f;i--)
	{
		char a='*';
		printf("*",a);
	}
	printf("\n");
	}
return 0;
}
