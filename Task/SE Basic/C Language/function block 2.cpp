#include<stdio.h>
myfun(int n)  // parameters
{
	printf("%d",n);
	int fac=1,i;
	
	for(i=1;i<=n;i++)
	{
		fac*=i;
	}
	printf("\n Factorial is : %d",fac);
}
main()
{
	int a; // arguments
	printf("Enter number : ");
	scanf("%d",&a);
	myfun(a);
}

