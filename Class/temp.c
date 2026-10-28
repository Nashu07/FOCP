#include <stdio.h>
int main() {
    int c;
    printf("Enter temperature in Celsius: ");
    scanf("%d", &c);
    float formula=(c*9/5)+32;
    printf("%f",formula);
    return 0;
}