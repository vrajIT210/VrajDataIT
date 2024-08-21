#include<stdio.h>
myfun(int a,int b)  // parameters
{
	printf("%d %d",a,b);
	int sum;
	sum=a+b;
	printf("\n sum is : %d",sum);
	
}
main()
{
	int a,b; // arguments
	printf("Enter number : ");
	scanf("%d ",&a);
	printf("Enter number : ");
	scanf("%d",&b);
	myfun(a,b);
}

