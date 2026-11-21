
#include <stdio.h>

int gcd(int a, int b) {

    while (b != 0) {

        int remainder = a % b;

        a = b;
        b = remainder;
    }

    return a;
}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    int result = gcd(a, b);

    printf("%d\n", result);

    return 0;
}
