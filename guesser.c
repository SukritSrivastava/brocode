#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int guess;
    int tries = 0; 
    int max;
    int min;

    printf("Enter the minimum number: ");
    scanf("%d", &min);
    
    printf("Enter the maximum number: ");
    scanf("%d", &max);

    // Calculate answer AFTER min and max have been entered by the user
    int answer = (rand() % (max - min + 1)) + min;

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        tries++; // Count the try immediately after they guess

        if (guess < answer) {
            printf("Too low! Try again.\n");
        } else if (guess > answer) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries.\n", tries);
        }

    } while (guess != answer);

    return 0;
}