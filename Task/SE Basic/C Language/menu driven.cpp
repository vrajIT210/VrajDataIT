#include<stdio.h>
add()
{
	int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Result: %d + %d = %d\n", a, b, (a + b));	
}
prime()
{
	int n,i,c=0;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
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
right()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
	for(j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}	
}
main()
{
	int choise;
	printf("\n1. for Addition");
	printf("\n2. for prime");
	printf("\n3. for right angle");
	printf("\n4. for exit");
	while (1)
	{
		printf("\nenter your choise : ");
		scanf("%d",&choise);
		
		if(choise==1)
		{
			add();
		}
		else if(choise==2)
		{
			prime();
		}
		else if(choise==3)
		{
			right();
		}
		else if(choise==4)
		{
			printf("thank you");
			break;
		}
		else
		{
			printf("Invalid choise!!");
		}
	}
}
