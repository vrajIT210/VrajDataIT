#include<stdio.h>
main()
{
	int a[4];
	int i,j,temp;
	for(i=0;i<4;i++)
	{
		printf("\n enter the array elements "); 	//user defined elements
		scanf("%d",&a[i]);
	}
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]>a[j])	//for ascending order
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				
			}
		}	
			for(i=0;i<4;i++)
			{
				printf("\n elements are %d ",a[i]);		//print ascending array
			}
}
