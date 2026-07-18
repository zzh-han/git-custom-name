#include<stdio.h>

void print(int*, int, int);

int main(){
    int v[2][3] = {{1, 2, 3}, {7, 8, 9}};
    print((int*)v, 2, 3);
    return 0;
}

void print(int* n, int height, int width){
    for(int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            printf("%d ", *(n + i * width + j));
        }
        printf("\n");
    }
}