#include<stdio.h>
main()
{
	int i,n,c=0;
	printf("Enter number : ");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
