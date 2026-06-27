#include<stdio.h>

int main(){
    int a , b , c , x;
    printf("please input : \n");
    scanf("%d%d%d" , &a , &b , &c);
        if (b <= a){
            x = a ;
            a = b ;
            b = x ;
         }//jkhadh
         if (c <= a){
            x = a ;
            a = c ;
            c = x ;
         }
         if (c <= b){
            x = b ;
            b = c ;
            c = x ;
         }
    printf("%d %d %d\n" , a , b , c);
    return 0;
}