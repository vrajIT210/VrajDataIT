#include<stdio.h>
main()
{
	int a[2][3],i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nenter elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elements are %d %d is %d\n",i,j,a[i][j]);
		}
	}
}
