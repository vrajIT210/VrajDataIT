#include<stdio.h>
main()
{
	int a[4];	//array
	int choice,i,j,temp;	//declaration
	for(int i=0;i<4;i++)
	{
		printf("\n enter the array elements ");
		scanf("%d",&a[i]);
	}
	printf("\n the elements are %d",a[i]);
	printf("\nenter 1 for ascending the array ");	//for ascending array
	printf("\nenter 2 for descending the array ");	//for descending array
	printf("\nenter 3 for exit the array ");
	while(true)
	{
		printf("enter the choice ");	//feeling choice
		scanf("%d",&choice);
		if(choice ==1 )		//choice 1 for ascending
		{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}	
			for(i=0;i<4;i++)
			{
				printf("\n elements are %d ",a[i]);
			}
			
		}
		else if(choice ==2 )	//choice 2 for descending
		{
		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}	
			for(i=0;i<4;i++)
			{
				printf("\n elements are %d ",a[i]);
			}
			
		}
		else if(choice ==3 )	//choice 3 for exit
		{
		printf("exit ");
		break;
		}
		else 
		{
			printf("invalid");
			break;
		}
	}
	
}
