#include <stdio.h>
int main(){
    int answer = 5;
    int guess = 0;
    int count = 0;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    count++;
    while(guess != answer){
        if(guess < answer){
            printf("Too low! Try again: ");
        } else {
            printf("Too high! Try again: ");
        }
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;
    }
    printf("Correct!\n");
    printf("Number of guesses: %d\n", count);
    return 0;
}