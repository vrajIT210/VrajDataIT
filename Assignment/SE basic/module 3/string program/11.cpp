#include <stdio.h>
#include <ctype.h>

main() 
{
    char sentence[1000];		//program to rewrite the sentence in upper case & lower case
    int i = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);

    while (sentence[i] != '\0') 
	{
        if (islower(sentence[i])) 
		{
            sentence[i] = toupper(sentence[i]);
        }
        else if (isupper(sentence[i])) 
		{
            sentence[i] = tolower(sentence[i]);
        }
        i++;
    }

    printf("Modified sentence: %s\n", sentence);
}

