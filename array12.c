#include<stdio.h>

int main(){
    int n[3][3] , i , j , k = 1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            n[i][j] = k;
            k++;
        }
    }//用两层循环给两层阵列赋值
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}//打印出九宫格