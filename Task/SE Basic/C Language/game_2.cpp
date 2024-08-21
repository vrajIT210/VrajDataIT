#include<stdio.h>
main()
{
	int n,original=30;
	printf("\n**********Welcome to the Game**********\n");
	printf("\n**********Enter Number*********\n");
	
	while(1)
	{
		printf("\nEnter number : ");
		scanf("\n%d",&n);
	if(n<original)
	{
		printf("\nless than original number");
	}
	else if(n==30)
	{
		printf("\nYou win the Game");
		break;
	}
	else if(n>50)
	{
		printf("\nInvalid number");
	}
	else if(n>original)
	{
		printf("\nGreater than original number");
	}
	}
}
