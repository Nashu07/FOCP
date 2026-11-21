
#include <stdio.h>

int main() {
    int r, c;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < r; i++) {
        int sum = 0;

        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    // Calculate column sums
    for (int j = 0; j < c; j++) {
        int sum = 0;

        for (int i = 0; i < r; i++) {
            sum += arr[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    return 0;
}
