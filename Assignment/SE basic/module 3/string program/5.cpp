#include <stdio.h>

main() 
{
    char str1[100], str2[100]; 		//program to find if both of the string are equal or not
    int i, flag = 0;

    printf("Enter the first string: ");		//string 1
    scanf("%s", str1);

    printf("Enter the second string: ");	//string 2
    scanf("%s", str2);

  
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) 
	{
      
        if (str1[i] != str2[i]) 
		{
            flag = 1;
            break;
        }
    }

   
    if (flag == 0) 
	{
        printf("Both strings are equal.\n");
    } 
	else 
	{
        printf("Strings are not equal.\n");
    }
}

