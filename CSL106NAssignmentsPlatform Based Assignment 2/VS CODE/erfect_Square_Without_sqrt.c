
#include <stdio.h>

int isPerfectSquare(int n) {

    if (n < 0) {
        return 0;
    }

    for (int i = 0; i <= n; i++) {

        if (i * i == n) {
            return 1;
        }
    }

    return 0;
}

int main() {

    int n;

    scanf("%d", &n);

    int result = isPerfectSquare(n);

    printf("%d\n", result);

    return 0;
}
