#include<stdio.h>
main()
{
	int a[4],b[4];
	int i,j;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter number : %d",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<4;j++)
	{
		printf("\nEnter number : %d",j);
		scanf("%d",&b[j]);
	}
		printf("\nAddition : %d",a[i]+b[j]);
}
	
