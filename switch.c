#include <stdio.h>
int main(){
    int total = 0;
    int id;
    do{
        scanf("%d", &id);
        switch(id){
            case 1:
                total += 100;
                break;
            case 2:
                total += 200;
                break;
            case 3:
                total += 300;
                break;
            case 4:
                total += 400;
                break;
            case 5:
                total += 500;
                break;
        }
    }while(id != 0);
    printf("Total: %d\n", total);
    return 0;
}