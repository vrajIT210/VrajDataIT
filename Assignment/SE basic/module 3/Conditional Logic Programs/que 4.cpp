#include <stdio.h>

void addition();		//calculator from switch case statement
void subtraction();
void multiplication();
void division();

main() 
{
    int choice = 0;

    printf("----------MENU----------"); 	//menu 
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit");
    

    while (1) 
	{
        printf("\nEnter the operation you wish to perform: ");
        int result = scanf("%d", &choice);

        if (result != 1 || choice < 1 || choice > 5) 
		{ 
            printf("Invalid\n");		//default
            while (getchar() != '\n'); 
            continue;
        }
        switch (choice) 	//choice filling
		{
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("exit\n");
                printf("--------------------");
        }
    }
}

void addition() 
{
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Result: %d + %d = %d\n", a, b, (a + b));
}

void subtraction() 
{
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Result: %d - %d = %d\n", a, b, (a - b));
}

void multiplication() 
{
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Result: %d * %d = %d\n", a, b, (a * b));
}

void division() 
{
    int a, b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    if (b != 0) 
	{
        printf("Result: %d / %d = %d\n", a, b, (a / b));
    } 
	else 
	{
        printf("Division by zero is not allowed.\n");
    }
}

