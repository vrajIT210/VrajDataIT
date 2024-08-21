#include <stdio.h>
main() 
{
    float height;		//program to find if the person is short,average,tall or very tall
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    if (height < 150) 
	{
        printf("The person is Short.\n");
    } 
	else if (height >= 150 && height < 170) 
	{
        printf("The person is Average.\n");
    } 
	else if (height >= 170 && height < 190) 
	{
        printf("The person is Tall.\n");
    } 
	else 
	{
        printf("The person is Very Tall.\n");
    }

}

