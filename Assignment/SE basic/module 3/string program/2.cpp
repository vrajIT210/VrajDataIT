#include <stdio.h>
main() 
{
    char str[100]; 		//program to print the individual char's of a string

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    printf("Individual characters: ");
    

    for (int i = 0; str[i] != '\0'; i++)
	{
        printf("%c ", str[i]);
    }

    printf("\n");
}

