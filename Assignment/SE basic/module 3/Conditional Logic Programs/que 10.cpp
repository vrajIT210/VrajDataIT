#include<stdio.h>
main()
{
	int number;		//program to find if the number is zero,positive or negative
	printf("enter the number  ");
	scanf("%d",&number);
	if (number==0)
	{
		printf("number is zero ");
	}
	else if (number>0)
	{
		printf("number is positive ");
	}
	else {
		printf("negative number");
	}
}
