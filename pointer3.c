#include<stdio.h>

int main(){
    int v[] = {1, 2, 3, 4, 5};
    int* n = v;
    for(int i = 0; i < 5; i++){
        printf("%d ", *n);
        n++;
    }
    return 0;
}