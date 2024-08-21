#include<stdio.h>
#include<string.h>
main()
{
	char a[4],b[4];
	
	printf("Enter string 1 : ");
	gets(a);
	
	printf("Enter string 2 : ");
	gets(b);
	
	int c=strcmp(a,b);
	printf("\nComparison is : %d",c);
	
}
