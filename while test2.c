#include <stdio.h>
int main() {
    int number;
    int counter = 0;
    int sum = 0;
    float average;
    printf("Enter an integer: ");
    scanf("%d", &number);
    while(number != 0) {
        sum += number;
        counter++;
        printf("Enter an integer: ");
        scanf("%d", &number);
    }
    if(sum == 0) {
        printf("No numbers entered.\n");
        return 0;
    }
    average = (float)sum / counter;
    printf("Average: %f\n", average);
    return 0;
}