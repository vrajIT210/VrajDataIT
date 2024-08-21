#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	printf("enter number 3 : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greatest", a);
		}
		else
		{
			printf("%d is greatest", c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is greatest", b);
		}
		else
		{
			printf("%d is greatest", c);
		}
	}
}
