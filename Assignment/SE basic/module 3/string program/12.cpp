#include <stdio.h>
#include <string.h>

main() 
{
    char str[1000]; 	//program to find that how many times "is" appear in the sentence
    int count = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 

    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] == 'i' && str[i+1] == 's' && (str[i+2] == ' ' || str[i+2] == '\0')) {
            count++;
        }
    }

    printf("Number of times 'is' appears in the string: %d\n", count);
}

