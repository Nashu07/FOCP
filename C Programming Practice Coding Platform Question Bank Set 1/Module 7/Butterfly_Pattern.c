
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;

    // Upper half
    for (int i = 1; i <= mid; i++) {

        // Left wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        // Middle spaces
        for (int j = 1; j <= 2 * (n - 2 * i + 1) - 1; j++) {
            printf(" ");
        }

        // Right wing
        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower half
    for (int i = mid - 1; i >= 1; i--) {

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= 2 * (n - 2 * i + 1) - 1; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
