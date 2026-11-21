
#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    int a, b, c;

    // Take input
    scanf("%d %d %d", &a, &b, &c);

    // Find and print maximum
    printf("%d\n", maxOfThree(a, b, c));

    return 0;
}
