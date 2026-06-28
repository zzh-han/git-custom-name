#include <stdio.h>
int main(){
    int a , b ;
    printf("please input : \n");
    scanf("%d %d", &a, &b);
    if(a > b){
        printf("%d\n", a);
    }
    else{
        if(a < b){
            printf("%d\n", b);
        }
        else{
            printf("a = b\n");
        }
    }
    return 0 ;   
}




