#include<stdio.h>
#include<string.h>
main()
{
	char a[4],b[4],i;

	printf("enter String : ");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("\ncopy string is : %s",b);
}
