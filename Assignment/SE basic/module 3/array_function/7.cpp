#include<stdio.h>
main()
{
	char str[100];		//string
	int length=0;
	printf("\n enter string ");
	scanf("%s",str);
	
	while(str[length]!=0)
	{
		length++;
	}
	printf("the length of string is %d",length);
	
}
