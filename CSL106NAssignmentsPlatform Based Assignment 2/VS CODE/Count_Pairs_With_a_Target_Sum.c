
#include <stdio.h>

int main() {

    int n, target;
    int count = 0;

    scanf("%d %d", &n, &target);

    int arr[1000];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check pairs
    for (int i = 0; i < n; i++) {

        for (int j = i + 1; j < n; j++) {

            if (arr[i] + arr[j] == target) {
                count++;
            }

        }
    }

    printf("%d\n", count);

    return 0;
}
