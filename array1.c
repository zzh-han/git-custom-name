#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int i , j;
    int arr[6] = {0};
    for(i=1; i<=6000; i++){
        int dice = rand() % 6 + 1;
        arr[dice-1]++;//给阵列元素赋值时甚至不知道具体数值，但是知道阵列编号和dice的关系                                 
    }
    for(i=0; i<6; i++){
        printf("%d : %d\n", i+1, arr[i]);
    }
    return 0;
}//使用阵列做抛6000次色子的实验，统计每个点出现的次数（循环存取阵列元素）