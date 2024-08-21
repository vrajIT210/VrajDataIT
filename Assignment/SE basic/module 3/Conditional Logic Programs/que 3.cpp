#include <stdio.h>
main() 
{
    int year;		//program to find if the year is leap or not

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 	//condition
	{
        printf("%d is a leap year.\n", year);
    } 
	else 
	{
        printf("%d is not a leap year.\n", year);
    }

}

