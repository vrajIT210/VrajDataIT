#include <stdio.h>

main() 
{
    char ch;

    printf("Enter a character: ");		//program to find if caracter is vowel or consonant
    scanf(" %c", &ch);

    switch(ch) 
	{
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break; 
        default:		//default
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
			{
                printf("%c is a consonant.\n", ch);
            } 
			else 
			{
                printf("%c is not an alphabet character.\n", ch);
            }
    }
}

