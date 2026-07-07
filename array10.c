#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i , n , count[10] = {0};//使用计数阵列count[]
    srand(time(0));
    for(i = 1; i <= 10; i++){
        do{
            n = rand() % 10 + 1;
        }while (count[n-1] != 0);
        count[n-1]++;//1则count[0]+1 , 2则count[1]+1 以此类推，count[]代表次数      
        printf("%d ", n);
    }
    return 0;
}//也是随机产生10个不重复的0~10的整数，但是用阵列count【】阵列计数，阵列参数是整数的大小范围