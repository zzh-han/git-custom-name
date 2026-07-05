#include<stdio.h>

int main(){
    int n[10];
    int i;
    for(i = 1; i <= 10; i++){
        scanf("%d", &n[i-1]);
    }
    while (1)
    {
        int L , R;
        printf("L&R:");
        scanf("%d%d", &L , &R);
        if (L == 0 && R == 0){
            break;
        }
        printf("Ans:");
        for (i = 0; i < 10; i++){
            if (L <= n[i] && n[i] <= R)
            {
                 printf("%d ", n[i]);
            }   
        }
        printf("\n");               
    }
    return 0;
}