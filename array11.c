#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i , j, n[10];
    srand(time(0));
    for(i = 1; i <= 10; i++){
        n[i - 1] = i;//阵列依次存入1~10
    }
    for(i = 1; i <= 10; i++){
        j = rand() % (11 -i) + i;//此行为保证不重复的关键代码
        int t = n[i - 1];
        n[i - 1] = n[j - 1];
        n[j - 1] = t;
        printf("%d ", n[i -1]);
    }
    return 0;
}//交换法生成1~10内且不重复的10个整数