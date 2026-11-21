
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = abs(arr[0] - arr[1]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int diff = abs(arr[i] - arr[j]);

            if (diff < minDiff) {
                minDiff = diff;
            }
        }
    }

    printf("%d\n", minDiff);

    return 0;
}
