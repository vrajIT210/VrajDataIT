#include<stdio.h>
main()
//PROGRM TO DECLARE NAMES FROM ENTER THE NAMES
{

char a[50][50];

for(int i=1;i<=5;i++)
{
	printf("enter the names ");
	scanf("%s",a[i]);
}
for(int i=1;i<=5;i++)
{
	printf("names : %s\n",a[i]);
}
}
