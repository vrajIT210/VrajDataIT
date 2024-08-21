#include <stdio.h>
main() 
{
    int m, n;	//program to find value of n from m

    printf("Enter the value of m: ");
    scanf("%d", &m);

    if (m > 0)		//conditional statement
	{
        n = 1;
    } 
	else if (m == 0) 
	{
        n = 0;
    } 
	else 
	{
        n = -1;
    }

    printf("The value of n is: %d\n", n);
}

