#include<stdio.h>
/*main()
{
	FILE *fp;
	
	fp=(fopen("test1.txt","w"));
	fprintf(fp,"hello");
	fclose(fp);
}
*/

/*main()
{
	FILE *fp;
	
	fp=(fopen("test1.txt","a"));
	fprintf(fp,"\nwelcome");
	fclose(fp);
}
*/
main()
{
	FILE *fp;
	
	fp=(fopen("test1.txt","r"));
	char a[100];
	while(fgets(a,100,fp)!=NULL)
	{
	printf("%s",a);
	
	}
	fclose(fp);
}

