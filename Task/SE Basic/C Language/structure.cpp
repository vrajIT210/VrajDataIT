#include<stdio.h>
struct mystru{
	int a;
	int b;
	
}s1;
main()
{
	struct mystru s1;
	printf("enter number 1 : ");
	scanf("%d",&s1.a);
	printf("enter number 2 : ");
	scanf("%d",&s1.b);
	printf("\nAddition is %d",s1.a+s1.b);
	
}
