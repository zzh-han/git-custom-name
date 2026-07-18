#include<stdio.h>
#include<string.h>

int main(){
    char n[5000];
    char input[50];
    int len = 0;
    int size = 0;
    char* str[100];
    while(1){
        scanf("%s", input);
        if(strcmp(input, "END") == 0) break;
        str[len] = &n[size];
        strcpy(&n[size], input);
        size += strlen(input) + 1;
        len++;
    }
    printf("_____________\n");
    for(int i = 0; i < len; i++){
        printf("%s ", str[i]);
    }
    printf("\n(%d, %d)\n", len, size);
    return 0;
}