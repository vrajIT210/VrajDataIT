#include <stdio.h>
main() 
{
    char character;		//program to find if the caracter is in lowercase,uppercase or in a digit

    printf("Enter a character: ");
    scanf(" %c", &character); 

    if ((character >= 'A' && character <= 'Z')) 
	{
        printf("%c is an uppercase letter.\n", character);
    } 
	else if ((character >= 'a' && character <= 'z')) 
	{
        printf("%c is a lowercase letter.\n", character);
    } 
	else if (character >= '0' && character <= '9') 
	{
        printf("%c is a digit.\n", character);
    } 
	else 
	{
        printf("%c is a special character.\n", character);
    }

}

