#include<stdio.h>
main()
{
	int n;
	
	printf("enter age :");
	scanf("%d", &n);
	
	if(n>=100)  //check condition 1
	{
		printf("Invalid age!!");
	}
	
	else if(n>=18)   // condition 2
	{
		printf("Eligible for vote");
	}
	
	else 
	{
		printf("not Eligible for vote");
	}
}
