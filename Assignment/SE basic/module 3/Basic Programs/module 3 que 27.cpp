#include<stdio.h>
main()
{
	int days,months;		//program to convert days into month
	printf("enter days :");
	scanf("%d",&days);
	
	months = days/30;
	
	printf("months=%d",months);
}
