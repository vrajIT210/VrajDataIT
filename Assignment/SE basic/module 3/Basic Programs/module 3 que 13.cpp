#include <stdio.h>

int main() 
{
    int ascii_code;		//program to find character from ascii value
    
    printf("Enter ASCII code: ");
    scanf("%d", &ascii_code);
    
    char character = (char)ascii_code;
    
    printf("Character: %c\n", character);
    
    return 0;
}
