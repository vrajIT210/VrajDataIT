#include<stdio.h>

int main() 		//program to find abbrivated form of fname,mname,lname
{
  
  char fname[20], mname[20], lname[20];
  printf("enter the first name, middle name and last name \n");
  scanf("%s %s %s", fname, mname, lname);
  printf("Abbreviated Name: ");
  printf("%c. %c. %s\n", fname[0], mname[0], lname);
  return 0;

}
