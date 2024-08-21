#include<stdio.h>
main()
{
	int a[4],b[4];
	int i,j,sum;
	
	for(i=0;i<4;i++)
	{
		printf("enter number : %d\n",a);
		scanf("%d",&a[i]);
	}
	for(j=0;j<4;j++)
	{
		printf("enter number : %d\n",b);
		scanf("%d",&b[j]);
		sum=sum+a[i]+b[j];
	}
	printf("\nsum is :%d",sum);
}

