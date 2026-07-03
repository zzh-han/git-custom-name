#include<stdio.h>

int sum(int);
int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("the sum is %d", sum(N));
    return 0;
}//用函式递归求1到N的和

int sum(int N){
    if(N == 1){
        return 1;
    }    
    return  N + sum(N - 1);    
}