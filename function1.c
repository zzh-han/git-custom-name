#include<stdio.h>
#include<math.h>

int main() {
    double x = 0;
    printf("Enter a number: ");
    scanf("%lf", &x);
    printf("Square root of %.2f is %.2f\n", x, sqrt(x));
    return 0;
}