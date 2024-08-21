#include<stdio.h>
main()
{
	int a[2][2],b[2][2],i,j;
		printf("--------Matrix 1--------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter elements of a : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nelements are %d %d is %d\n",i,j,a[i][j]);
		}
	}
	printf("\n--------Matrix 2--------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nenter elements of b : ");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("elements are %d %d is %d\n",i,j,b[i][j]);
		}
	}
	printf("\n--------Result : Multiplication Matrix--------");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n%d",a[i][j]*b[i][j]);
		}
		printf("\n");
	}
	
}
