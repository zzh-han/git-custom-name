#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int counter[11] = {0};
    for(int i = 1 ; i <= 100000 ; i++){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        counter[sum-2]++;//利用阵列编号和sum的关系循环赋值
    }
    for (int i = 2; i <= 12; i++)
    {
        printf("%d : %d\n" , i , counter[i-2]);
    }    
    return 0;
}//抛两个骰子100000次，统计两个点数之和（循环给阵列赋值）