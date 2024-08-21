#include <stdio.h>

// Function to find the maximum value in an array of 5 integers
void findMax() 
{
    int i, a[5];
    int max;

    // Input numbers from the user
    for (i=0;i<5;i++) 
	{
        printf("Enter number %d: ",i+1);
        scanf("%d", &a[i]);
    }

    max = a[0];

    // Find the maximum number
    for (i=1;i<5;i++) 
	{
        if (a[i]>max) 
		{
            max=a[i];
        }
    }

    // Print the maximum number
    printf("The maximum number is %d\n", max);
}

// Main function
main() 
{
    findMax();
}

