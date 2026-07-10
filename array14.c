#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arrayRand(int[10]);
void arrayPrintf(int[10]);
void arrayMax(int[10]);

int main(){
    srand(time(NULL));
    int n[10];
    arrayRand(n);
    arrayPrintf(n);
    printf("\n");
    arrayMax(n);
    return 0;
}

void arrayRand(int v[10]){
    int i;
    for(i = 0; i < 10; i++){
        v[i] = rand() % 100; 
    }
}

void arrayPrintf(int v[10]){
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ", v[i]);
    }
}

void arrayMax(int v[10]){
    int max = v[0];
    for(int i = 1; i < 10; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    printf("%d", max);
}

