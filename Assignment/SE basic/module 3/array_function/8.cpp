#include <stdio.h>
#include <string.h>

main()
{
    char str[60];		//string length
    char reversedStr[60];
    int len,i;
    int isPalindrome=1;

    printf("Enter a string: ");
    scanf("%s",str);

    len=strlen(str);		//length of string

    for (i=0;i<len;i++) 
	{
        reversedStr[i]=str[len-i-1];		//reversed string
    }
    reversedStr[len]='\0'; 
    printf("Reversed string: %s\n", reversedStr);


    for (i=0;i<len;i++)
	{
        if (str[i]!=reversedStr[i]) 		//forward to reverse string
		{
            isPalindrome=0;
            break;
        }
    }

    if (isPalindrome) 		//for palindrome
	{
        printf("The string is a palindrome.\n");
    } 
	else 		//for non palindrome
	{
        printf("The string is not a palindrome.\n");
    }
}
