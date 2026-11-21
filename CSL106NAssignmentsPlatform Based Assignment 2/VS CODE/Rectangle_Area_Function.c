
#include <stdio.h>

int rectangleArea(int length, int width) {
    int area = length * width;
    return area;
}

int main() {
    int length, width;

    // Take input
    scanf("%d %d", &length, &width);

    // Call function
    int result = rectangleArea(length, width);

    // Print area
    printf("%d\n", result);

    return 0;
}
