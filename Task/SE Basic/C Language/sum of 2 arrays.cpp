#include<stdio.h>
main()
{
	int a[4],b[4],sum=0;
	int i;
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter number : %d",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\nEnter number : %d",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<4;i++)
	{
		sum=sum+a[i]+b[i];
	}
		printf("\nsum is : %d",sum);
}
