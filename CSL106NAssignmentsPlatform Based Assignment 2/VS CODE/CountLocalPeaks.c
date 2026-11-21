
#include <stdio.h>

int main() {
    int r, c;
    int count = 0;

    scanf("%d %d", &r, &c);

    int arr[r][c];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check every element
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {

            int peak = 1;

            // Check top neighbour
            if (i > 0 && arr[i][j] <= arr[i - 1][j]) {
                peak = 0;
            }

            // Check bottom neighbour
            if (i < r - 1 && arr[i][j] <= arr[i + 1][j]) {
                peak = 0;
            }

            // Check left neighbour
            if (j > 0 && arr[i][j] <= arr[i][j - 1]) {
                peak = 0;
            }

            // Check right neighbour
            if (j < c - 1 && arr[i][j] <= arr[i][j + 1]) {
                peak = 0;
            }

            if (peak == 1) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
