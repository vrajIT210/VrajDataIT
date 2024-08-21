#include<stdio.h>
main()
{
	int i,k,j;
	for(i=1;i<=4;i+=2)
	{
		for(k=1;k<=4-i||k>=4+i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=7;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
