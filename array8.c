#include<stdio.h>

int main(){
    int i = 0 , n = 0;
    int count[10] = {0};
    for(i = 0; i < 10; i++){
        scanf("%d", &n);
        count[n]++;
    }//键入一个值，数组用来计数
    int ans = count[0];
    for(i = 1; i <= 9; i++){
        if(count[ans] <= count[i] ){
            ans = i;
        }
    }//循环打擂台
    printf("ans:%d\n", ans);
    return 0;
}