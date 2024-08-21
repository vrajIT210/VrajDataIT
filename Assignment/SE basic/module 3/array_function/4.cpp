#include <stdio.h>

// function of factorial
int factorial(int n) 
{
    if (n<=1) 
	{
        return 1;
    }
    return n*factorial(n-1); // call
}

main() 
{
    int number;
    printf("Enter a positive number: ");	//for factorial check
    scanf("%d", &number);

    if (number<0) // condition 
	{
        printf("Factorial of negative number not exist.\n");
    } 
	else 
	{
        printf("\nFactorial of %d is %d\n", number, factorial(number));
    }
}

