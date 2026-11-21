
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int current = 1;
    int longest = 1;

    for (int i = 1; i < n; i++) {

        if (arr[i] > arr[i - 1]) {
            current++;
        } 
        else {
            current = 1;
        }

        if (current > longest) {
            longest = current;
        }
    }

    printf("%d\n", longest);

    return 0;
}
