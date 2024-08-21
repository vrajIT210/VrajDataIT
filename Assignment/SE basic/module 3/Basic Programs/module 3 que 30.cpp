#include<stdio.h>
main()
{
	int days,years;		//program to convert year into days & days into years
	printf("enter years : ");
	scanf("%d",&years);
	
	days = years*365;
	printf("days = %d",days);
	
	printf("\nenter days : ");
	scanf("%d",&days);
	years = days/365;
	printf("years = %d",years);
}
