#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() 
{
    int numberToGuess, playerGuess, attempts = 0;
    srand(time(NULL));
    numberToGuess = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("Welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");

    do 
	{
        printf("Enter your guess: ");
        scanf("%d", &playerGuess);
        attempts++;

        if (playerGuess > numberToGuess) 
		{
            printf("Too high! Try again.\n");
        } 
		else if (playerGuess < numberToGuess) 
		{
            printf("Too low! Try again.\n");
        } 
		else 
		{
            printf("Congratulations! You guessed the number %d in %d attempts!\n", numberToGuess, attempts);
        }
    } while (playerGuess != numberToGuess);

}

