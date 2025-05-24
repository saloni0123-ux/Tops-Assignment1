/*Lab Challenge 3: Number Guessing Game
• Write a C program that implements a simple number guessing game. The program should
generate a random number between 1 and 100, and the user should guess the number
within a limited number of attempts.
• Challenge: Provide hints to the user if the guessed number is too high or too low.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int number, guess, attempts = 0, maxAttempts = 7;

    srand(time(0));
    number = rand() % 100 + 1;  

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100. You have %d attempts.\n", maxAttempts);

    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);
        attempts++;

        if (guess == number) {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            return 0;
        } else if (guess < number) {
            printf("Too low! Try a higher number.\n");
        } else {
            printf("Too high! Try a lower number.\n");
        }
    }

    printf("Sorry, you've used all %d attempts. The number was %d.\n", maxAttempts, number);
    return 0;
}
