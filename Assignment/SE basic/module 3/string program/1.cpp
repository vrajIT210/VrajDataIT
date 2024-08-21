#include <stdio.h>

main() 
{
    char str[100]; 	//program to find the string length
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 


    while (str[length] != '\0') 
	{
        length++;
    }
	printf("Length of the string: %d\n", length);
}

