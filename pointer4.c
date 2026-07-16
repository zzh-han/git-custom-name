#include<stdio.h>

int main(){
    int a[] = {1, 3, 4, 6, 8};
    int b[] = {5, 7};
    int c[] = {20, 45, 654, 2, 5};
    int* n[] = {a, b, c};
    int i, j;
    while (1){
        scanf("%d%d", &i, &j);
        printf("%d\n", n[i][j]);
    }
    return 0;
}