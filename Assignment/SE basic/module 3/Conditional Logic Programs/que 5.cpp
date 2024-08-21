#include<stdio.h>
main() 
{

	int a;		//program to find if the number is negetive,positive or zero
	printf("enter no ");
	scanf("%d", &a);
	if(a==0)
	{
		printf("zero");
	}
	
	else if(a<0)
	{
		printf("negative");
	}
	else
	{
		printf("positive");
	}
}
