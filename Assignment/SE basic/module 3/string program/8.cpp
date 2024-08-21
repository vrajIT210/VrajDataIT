#include <stdio.h>
#include <ctype.h>
main() 
{
    char str[1000]; 	//program to find the total vowels & consonant of the string
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str); 
    
    
    while (str[i] != '\0') 
	{
        char ch = tolower(str[i]); 
        
        if (ch >= 'a' && ch <= 'z') 
		{
            
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
			{
                vowels++;
            }
            
            else 
			{
                consonants++;
            }
        }
        i++; 
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);
}

