#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, guess, attempts, score, min, max, play;
    do {
        printf("Do you want to play game? (1=play, -1=exit) :\n");
        while (scanf(" %d", &play) != 1) {
            printf("Please enter a number (1=play, -1=exit) :\n");
            while (getchar() != '\n'); 
        }

        if (play == 1) {
            number = rand() % 100 + 1; 
            score = 100; 
            min = 1; 
            max = 100; 

            printf("\n(Score = 100)\n");

            while (1) {
                printf("Guess the winnig number (%d-%d):\n", min, max);
                while (scanf("%d", &guess) != 1) {
                    printf("Please enter a number (%d-%d):\n", min, max);
                    while (getchar() != '\n'); 
                }
                if (guess < number) {
                    score -= 10;
                    min = guess + 1;
                    if (score <= 0) {
                        printf("You have no score left. Game over.\n");
                        break;
                    }
                    printf("Sorry, the winning number is higher than %d. (Score=%d)\n", guess, score);
                } else if (guess > number) {
                    score -= 10;
                    max = guess - 1;
                    if (score <= 0) {
                        printf("You have no score left. Game over.\n");
                        break;
                    }
                    printf("Sorry, the winning number is lower than %d. (Score=%d)\n", guess, score);
                } else {
                    printf("\nScore this game: %d\n", score);
                    printf("\nThat is correct! The winning number is %d.\n", number);
                    break; 
                }
            }
        }
    } while (play == 1); 

    printf("See you again.\n");
    return 0; 
}
