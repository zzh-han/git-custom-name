#include<stdio.h>

void countTo1(int);
int main() {
    countTo1(1);
    return 0;
}

void countTo1(int i) {
    if(i <= 10){
        countTo1(i + 1);
        printf("%d\n", i);
    }
}//用函式递归打印出10到9的数字