#include<stdio.h>

int main(){
    int count = 1;
    int* countAddr = &count;
    int n = *countAddr;
    printf("%p\n", countAddr);
    printf("%d\n", n);  
    return 0;
}//指标里的取址