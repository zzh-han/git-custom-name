#include<stdio.h>

int main(){
    int n[10];
    int i , x;
    for(i = 1; i <= 10 ; i++){
        scanf("%d", &n[i-1]);
    } //循环输入阵列数值
    while (1){
        int max_i = -1 ;//定义一个最大阵列编号
        printf("Q:");
        scanf("%d", &x);
        if(x == 0){
            break;
        }
        for(i = 0 ; i < 10 ; i++){
            if(n[i] < x && (max_i = -1 || n[i] > n[max_i])){
                max_i = i;
            }//这个if条件就找到了小于x的最大值
        }
        printf("A:%d\n", n[max_i]);  
    }  
    return 0;
}