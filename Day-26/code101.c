#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
    int secret_number, guess, attempts = 0;
    // Seed the random number generator using the current time
    srand(time(0));
    secret_number = (rand() % 100) + 1; // Generates a number between 1 and 100
    printf("    Welcome to the Number Guessing Game   \n");
    printf("I have picked a number between 1 and 100. Can you guess it?\n\n");
    // Loop until the user guesses the correct number
    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if(guess > secret_number) {
            printf("Too high! Try again.\n\n");
        }
        else if(guess < secret_number) {
            printf("Too low! Try again.\n\n");
        }
        else{
            printf("\nCongratulations! You guessed the number in %d attempts.\n", attempts);
        }
    }
while(guess != secret_number);
return 0;
}