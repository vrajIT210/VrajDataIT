#include <stdio.h>
main() 
{
    float marks;		//program to find if the student is pass or fail

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 40) 
	{
        printf("Pass\n");
    } 
	else 
	{
        printf("Fail\n");
    }
}

