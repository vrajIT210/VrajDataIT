#include<stdio.h>
main()
{
	int phy=65,chemistry=51,maths=72;	//program to find if student is eligible or not
	int total,total_m_p;
	total = phy+chemistry+maths;
	if(maths>=65 && phy>=55 && chemistry>=50 && total>=190 ||total_m_p >=140)	//condition
	{
		printf("eligible ");
	}
	else
	{
		printf("not eligible ");
	}
}
