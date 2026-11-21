
#include <stdio.h>

int main() {
    int r, c;
    int found = 0;

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

            int smallest = 1;
            int largest = 1;

            // Check if element is smallest in its row
            for (int k = 0; k < c; k++) {
                if (arr[i][j] > arr[i][k]) {
                    smallest = 0;
                    break;
                }
            }

            // Check if element is largest in its column
            for (int k = 0; k < r; k++) {
                if (arr[i][j] < arr[k][j]) {
                    largest = 0;
                    break;
                }
            }

            if (smallest == 1 && largest == 1) {
                printf("%d %d %d\n", i, j, arr[i][j]);
                found = 1;
                return 0;
            }
        }
    }

    if (found == 0) {
        printf("None\n");
    }

    return 0;
}
