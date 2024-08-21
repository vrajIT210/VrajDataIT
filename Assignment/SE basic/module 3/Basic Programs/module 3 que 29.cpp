#include<stdio.h>
main()
{
	int minutes,seconds,hours;	//program to convert minute into second & hours
	printf("enter minutes : ");
	scanf("%d",&minutes);
	
	seconds=minutes*60;
	printf("into seconds = %d",seconds);
	
	hours=minutes/60;
	printf("\ninto hours = %d",hours);
}
