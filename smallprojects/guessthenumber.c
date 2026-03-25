#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, checker = 1, guesscounter=1;

    srand(time(0));
    number = rand()%100 + 1; //generates a random number between 1 and 100
    // printf("%d\n", number);

    do {
        int guess;
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess>number) {
            printf("Guess lower.\n");
            guesscounter+=1;
        } else if (number>guess) {
            printf("Guess higher.\n");
            guesscounter+=1;
        } else {
            printf("You guessed right!\n");
            printf("Attempt to guess the word is %d, and number was %d.\n", guesscounter, number);
            checker=0;
        }
    } while (checker==1);
    
    return 0;
}