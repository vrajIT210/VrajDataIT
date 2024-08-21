#include<stdio.h>
main()
{
	int a[2][2],b[2][2],sum[2][2],sub[2][2],mul[2][2];
	int i,j;
	printf("input First array element...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("input second array element...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter the b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Display...\nFirst Array element..\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("a[%d][%d]=%d\t",i,j,a[i][j]);
		}
		printf("\n");
	}
	printf("Second Array element...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("b[%d][%d]=%d\t",i,j,b[i][j]);
		}
		printf("\n");
	}
	printf("");
	printf("\nAddition of two array...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];	
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n*\n");
	printf("\nSubtraction...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]-b[i][j]);
		}
		printf("\n");
	}
	int k;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<2;k++)
			{
				mul[i][j]=a[i][j]+a[i][k]*b[k][j];	
			}		
		}
	}
	printf("\n");
	printf("Multiplication of two array...\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
