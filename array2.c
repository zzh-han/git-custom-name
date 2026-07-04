#include<stdio.h>

int main(){
    int number ,total;
    int price[] = {113, 25, 324, 22, 22, 255, 56, 123};
    while(1){
        scanf("%d" ,&number);
        if(number == 0){
            break;
        }
        total += price[number - 1]; //这里也是知道阵列元素编号和number的关系直接赋值
    }
    printf("total = %d\n" ,total);    
    return 0;
}//计算消费金额（随机存取阵列元素）