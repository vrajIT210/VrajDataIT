#include<stdio.h>
main()		//program to find if the city temperature is freezing,very cold,cold,normal,hot or very hot
{
	int temp;
	printf("enter the temperature : ");
	scanf("%d",&temp);

	if(temp < 0)
		{
			printf("freezing weather\n");
		}
	else if(temp>=0 && temp<=10)
		{
			printf("very cold \n");
		}
	else if (temp>=10 && temp <=20)
		{
			printf("cold weather ");
		}
	else if (temp>=20 && temp <=30)
		{
			printf("normal ");
		}
	else if (temp>=30 && temp <=40)
		{
			printf("hot");
		}
	else 
		{
			printf("very hot ");
		}
}
