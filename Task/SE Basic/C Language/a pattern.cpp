#include<stdio.h>
main()
{
	int a=65,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",a);
			a++;
		}
		printf("\n");	
	} 
}
