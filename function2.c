#include<stdio.h>

int max2(int ,int);
int main() {
    int a, b;
    printf("please enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("the larger number is: %d\n", max2(a, b));
    return 0;
}

int max2(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}