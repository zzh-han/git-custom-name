#include<stdio.h>
int main(){
    int i , j , n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("*\n");
    for(i=0 ; i<=n-3 ; i++){
        printf("*");
        for(j=1 ; j<=i ; j++){
            printf(" ");
        }
        printf("*\n");
    }
    for(i=1 ; i<=n ; i++){
        printf("*");
    }
    return 0;
}