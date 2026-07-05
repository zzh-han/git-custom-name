#include<stdio.h>

int main(){
    int i;
    int n[5]={0};
    for(i = 1 ; i <= 5 ; i++){
        printf("%d: " , i);
        scanf("%d" , &n[i-1]);
        printf("\n");
    }
    while (1){
        printf("Q: ");
        scanf("%d" , &i);
        if (i == 0)
        {
            break;
        }        
        printf("%d\n" , n[i-1]);   
    }   
    return 0;
}
