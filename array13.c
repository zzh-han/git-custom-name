#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, k = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            int r = rand() % (9 - k) + k;
            int m = r / 3;//得到行
            int n = r % 3;//得到列
            /*做交换*/
            int t = v[m][n];
            v[m][n] = v[i][j];
            v[i][j] = t; 
            k++;
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
    return 0;
}//生成打乱顺序的九宫格