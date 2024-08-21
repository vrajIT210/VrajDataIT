#include<stdio.h>
main()
{
 float km, m;		//program to convert km into meter

 printf("Enter distance in kilometer: ");
 scanf("%f", &km);

 m = km * 1000;

 printf("%.2f Kilometer = %.2f Meter", km, m);

}
