#include<stdio.h>
main()
{
	int a=5,b=69,c=7;
	if(a>b)		//program to find which number is greater from a,b,c
	{
		if(a>c)
		{
			printf("a is greater ");
		}
		else 
		{
			printf("c is greater ");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greater ");
		}
		else 
		{
			printf("c is greater");
		}
	}
}
