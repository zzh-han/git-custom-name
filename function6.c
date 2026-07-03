#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int guess=rand()%100+1;
    int number;
    do{
        printf("Enter your guess: ");
        scanf("%d", &number);
        if(number<guess){
            printf("Too low! Try again.\n");
        }else if(number>guess){
            printf("Too high! Try again.\n");
        }
    }while(guess != number);
    printf("Congratulations! You guessed the number %d correctly.\n", guess);
    return 0;
}//用函数实现一个猜数字游戏