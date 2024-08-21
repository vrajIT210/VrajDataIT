#include <stdio.h>
#include <ctype.h>

main() 
{
    char str[1000], result[1000];		//program to remove the non-alphabetic characters from string
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
		{
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("String after removing non-alphabetic characters: %s\n", result);
}

