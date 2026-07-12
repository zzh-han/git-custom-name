#include<stdio.h>
void str_read(char str[]);

int main(){
    char str[15];
    str_read(str);
    printf("%s\n", str);
    return 0;
}

void str_read(char string[]){
    int i = 0;
    while(1){
        scanf("%c", &string[i]);
        if(string[i] == '\n'){
            break;
        }
        i++;
    }
    string[i] = '\0';//字符阵列最后一个'\0'
} 