#include <stdio.h>
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i = 2; i < N; i++){
        if(N % i == 0){
            printf("%d is not a prime number.\n", N);
            return 0;
        }
    }
    printf("%d is a prime number.\n", N);
    return 0;
}