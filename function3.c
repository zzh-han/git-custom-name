#include<stdio.h>

int max2(int ,int);
int max3(int ,int ,int);
int main(){
    int a, b, c;
    printf("please enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("the largest number is: %d\n" , max3(a, b, c));    
    return 0;
}//用函数实现求三个数的最大值，其中max3函数调用了max2函数

int max2(int x, int y){
    if(x > y){
        return x;
    } else {
        return y;
    }
}

int max3(int x, int y, int z){
    return max2(max2(x, y), z);
}