#include<stdio.h>
main()
{
	float bill_amount,total_bill,gst;		//program to find customers total bill amount
	printf("enter the bill amount \n");
	scanf("%f",&bill_amount);
	if(bill_amount>=256)
	{
		if(bill_amount>=800)
		{
			gst = bill_amount * 0.18;
			total_bill=bill_amount + gst;		//equation of total bill amount 
			printf("total is %f",total_bill);
		}
		else
		{
			printf("no gst ");
		}
	}
}
