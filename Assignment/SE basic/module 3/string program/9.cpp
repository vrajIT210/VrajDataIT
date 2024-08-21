#include <stdio.h>

#define MAX_LENGTH 1000 
main() 
{
    char str[MAX_LENGTH + 1]; 	//program to find the Maximum number of characters in the string
    int length = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    
    
    while (str[length] != '\0') 
	{
        length++;
    }

    printf("Maximum number of characters in the string: %d\n", length);
}

