#include<stdio.h>
#include<string.h>
main()
{
	char a[4],b[4];
	
	printf("Enter string 1 : ");
	gets(a);
	
	printf("Enter string 2 : ");
	gets(b);
	
	strcat(a," ");
	strcat(a,b);
	printf("\nString concat is : %s",a);
}
