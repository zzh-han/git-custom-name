#include<stdio.h>

void print(int**, int, int);

int main(){
    int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int* p[3] = {(int*)v[0], (int*)v[1], (int*)v[2]};
    print(p, 3, 3);
    return 0;
}

void print(int** n, int height, int widch){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < widch; j++){
            printf("%d ", n[i][j]);
        }
        printf("\n");
    }
}