#include <stdio.h>
int main(){
    int count = 0;
    for(int number = 1; number < 1000 && count < 3; number++){
        if(number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
        printf("%d\n", number);
        count++;
        }
    }
    return 0;
}