#include<stdio.h>

main() 
{
    int n,sum=0;	//declaration
    printf("Enter the number of elements: ");	//define elements
    scanf("%d", &n);
    
    int a[n];
    
    for(int i=0;i<n;i++) 
	{
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];	//sum of defined elements
    }
    
    printf("Sum of the elements is: %d\n", sum);
}

