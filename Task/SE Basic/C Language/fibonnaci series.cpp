#include<stdio.h>
main()
{
	int n,i,n1=0,n2=1;
	
	printf("enter terms : ");
	scanf("%d",&n);
	
	printf("%d\n",n1);
	printf("%d\n",n2);
	
	for(i=3;i<=n;i++)
	{
		int n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}
