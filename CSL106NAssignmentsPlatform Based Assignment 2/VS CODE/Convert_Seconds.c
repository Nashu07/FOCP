
#include <stdio.h>

int main() {

    int totalSeconds;

    scanf("%d", &totalSeconds);

    int hours = totalSeconds / 3600;

    int minutes = (totalSeconds % 3600) / 60;

    int seconds = totalSeconds % 60;

    printf("%d %d %d\n", hours, minutes, seconds);

    return 0;
}
