#include<stdio.h>
#include<string.h>
main()
{
	char a[4];
	int len;
	printf("enter string");
	scanf("%s",&a);
	for(int i=0;a[i]!='\0';i++)
	{
		len++;
	}
	printf("length is : %d",len)
}
