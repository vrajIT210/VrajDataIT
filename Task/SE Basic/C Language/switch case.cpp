#include<stdio.h>
main()
{
	char n;
	printf("\nEnter character : ");
	scanf("%d",&n);
	
	switch(n){
		case 'A':
			printf("vowel");
			break;
		case 'E':
			printf("vowel");
			break;
		case 'I':
			printf("vowel");
			break;
		case 'O':
			printf("vowel");
			break;
		case 'U':
			printf("vowel");
			break;
		default:{
			printf("\nconsonent");
			break;
		}
		
	}
}
