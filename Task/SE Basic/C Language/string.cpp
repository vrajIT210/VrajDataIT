#include<stdio.h>
#include<string.h>
main()
{
	char a[4],b[4];
	
	printf("Enter string : ");
	gets(a);
	
	printf("string is : %s",a);
	
	strcpy(b,a);
	
	printf("\nString is b : %s",b);
}
