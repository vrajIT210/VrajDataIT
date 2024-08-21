#include<stdio.h>
main()
{
	int a[2][2],b[2][2],i,j;
		printf("\t\t\t\tMatrix Multiplication\n");
		printf("\n-----------Matrix 1-----------\n"); //matrix 1
		printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("\n-----------Matrix 2-----------\n"); //matrix 2
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("\n--------Result : Multiplication Matrix--------\n");
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]*b[i][j]); //multiplication of both matrix
		}
		printf("\n");
	}
}
