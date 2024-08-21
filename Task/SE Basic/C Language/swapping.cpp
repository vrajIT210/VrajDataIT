#include<stdio.h>
main()
{
	int a,b,temp;
	printf("enter A : ");
	scanf("%d",&a);
	printf("enter B : ");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\nA after swapp : %d",a);
	printf("\nB after swapp : %d",b);
}
