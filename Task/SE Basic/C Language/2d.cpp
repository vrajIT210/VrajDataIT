#include<stdio.h>    

main()
{  
	int a[3][3],b[3][3],mul[3][3],i,j,k;    

	printf("\t\t\t\tMatrix Multiplication\n");
	printf("\n-----------Matrix 1-----------\n");   //matrix 1
	printf("\n");    
	for(i=0;i<2;i++)    
	{    
	for(j=0;j<2;j++)    
	{    
		printf("Enter elements : ");
		scanf("%d",&a[i][j]);    
	}	    
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}   
	printf("\n-----------Matrix 2-----------\n");     //matrix 2
	printf("\n");    
	for(i=0;i<2;i++)    
	{    
	for(j=0;j<2;j++)    
	{    
		printf("Enter elements : ");
		scanf("%d",&b[i][j]);    
	}   
	}
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\n");
	}    
    printf("\n--------Result : Multiplication Matrix--------\n");
	printf("\n");    
	for(i=0;i<2;i++)    
	{    
	for(j=0;j<2;j++)    
	{    
	mul[i][j]=0;    
	for(k=0;k<2;k++)    
	{    
	mul[i][j]+=a[i][k]*b[k][j];    
	}    
	}	    
	}    
    
	for(i=0;i<2;i++)    
	{    
	for(j=0;j<2;j++)    
	{    
	printf("\t%d",mul[i][j]);    
	}    
	printf("\n");    
	}    
 
}
