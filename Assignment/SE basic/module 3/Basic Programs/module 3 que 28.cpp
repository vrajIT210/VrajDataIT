#include<stdio.h>
main()
{
	int year,days,months;	//program to convert year into days & months
	printf("enter year :");
	scanf("%d",&year);
	
	days = year*365;
	printf("days=%d",days);
	
	months = year*12;
	printf("\nmonths=%d",months);
	
}
