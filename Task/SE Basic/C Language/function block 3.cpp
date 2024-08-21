#include<stdio.h>
prime()
{
	int c=0,n=8,i;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return"number is prime";
	}
	else
	{
		return"number is not prime";
	}
}

main()
{
	//printf("Addition : %d", add());
	//int result = prime();
	//printf("addition : %d", prime());
	printf(prime());

}

