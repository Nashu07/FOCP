
#include <stdio.h>

int main() {

    int x, result;

    scanf("%d", &x);

    if (x < 0) {
        result = x * x + 2 * x + 1;
    }
    else if (x >= 0 && x < 10) {
        result = 3 * x + 2;
    }
    else {
        result = 5 * x - 7;
    }

    printf("%d\n", result);

    return 0;
}
