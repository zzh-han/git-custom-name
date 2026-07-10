#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int i , j ,n[10];
    srand(time(0));
    for(i = 0; i < 10; i++){
        do{
            n[i] = rand()%10 + 1;
            for(j = 0; j < i; j++){
                if(n[j] == n[i]){
                    break;
                }
            }
        }while (i != j);//判断上一个for循环是否触发了break
        printf("%d ", n[i]);
    }
    return 0;
}//随机生成10个0~10的整数且不重复