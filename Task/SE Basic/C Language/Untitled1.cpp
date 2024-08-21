#include<stdio.h>
main()
{
	int a,b;
	
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	
	printf("\nAddition : %d",a+b);
	printf("\nSubtraction : %d",a-b);
	printf("\nAddition : %d",a*b);
	printf("\nDivision : %.2f", (float) a/b);
}
