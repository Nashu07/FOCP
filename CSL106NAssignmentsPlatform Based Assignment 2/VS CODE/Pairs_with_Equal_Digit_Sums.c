
#include <stdio.h>

int digitSum(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }

    return sum;
}

int main() {
    int n, count = 0;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (digitSum(arr[i]) == digitSum(arr[j])) {
                count++;
            }

        }
    }

    printf("%d\n", count);

    return 0;
}
