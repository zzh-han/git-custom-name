#include<stdio.h>
#include<stdlib.h>

int main(){
    int n[10];
    int i , q;
    for(i = 1; i <= 10; i++){
        scanf("%d", &n[i-1]);
    }
    while(1){
        int nearest_n = n[0];
        printf("Q:");
        scanf("%d", &q);
        if(q == 0){
            break;
        }
        for(i = 1; i < 10; i++){
            if(abs(q - n[i]) < abs(q - nearest_n) || (abs(q - n[i]) == abs(q -nearest_n) && n[i] < nearest_n)){
                nearest_n = n[i];
            }
        }
        printf("A:%d\n", nearest_n);
    }
    return 0;
}