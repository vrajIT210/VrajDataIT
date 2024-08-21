#include<stdio.h>
main()
{
	int i,n,sum;
	printf("enter a number : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum is :%d",sum);
}
