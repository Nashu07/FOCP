
#include <stdio.h>

int countMultiples(int n, int k) {
    return n / k;
}

int main() {
    int n, k;

    // Take input
    scanf("%d %d", &n, &k);

    // Call function
    int result = countMultiples(n, k);

    // Print result
    printf("%d\n", result);

    return 0;
}
