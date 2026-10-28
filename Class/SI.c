#include <stdio.h>
int main() {
    int profit, rate, time, SI;
    printf("Enter profit: ");
    scanf("%d", &profit);
    printf("Enter rate: ");
    scanf("%d", &rate);
    printf("Enter time: ");
    scanf("%d", &time);
    SI = profit * rate * time / 100;
    printf("Simple Interest is: %d", SI);
    return 0;
}