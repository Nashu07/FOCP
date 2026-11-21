
#include <stdio.h>

int main() {
    int n;
    int symmetric = 1;

    scanf("%d", &n);

    int arr[n][n];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (arr[i][j] != arr[j][i]) {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0) {
            break;
        }
    }

    if (symmetric == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
