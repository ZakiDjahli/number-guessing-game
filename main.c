#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Number Guessing Game:

    printf("*** Welcome to The Number Guessing Game ***\n");
    srand(time(NULL));

    int guess = 0;
    int attempts = 0;
    bool valid = false;
    int max = 100;
    int min = 1;

    int randomNumber = rand() % (max - min + 1) + min; 

    while (!valid) {
        
        printf("Please Enter an integer between 1-100: ");


        if (scanf("%d", &guess) != 1) {
            printf("Please Enter a Vaild Integer!");
            return 1;
        }

        attempts++;

        if (guess < min || guess > max) {
            printf("Please Enter A number In the Range!\n");

        } else if (guess > randomNumber) {
            printf("TOO HIGH!\n");

        } else if (guess == randomNumber) {

            printf("\nCongratulations!, It's Correct!\n");
            printf("The Number is %d And This is Your %d Attempt\n", randomNumber, attempts);    
            valid = true;

        } else {

            printf("TOO LOW\n");
        }

    }

    return 0;
}