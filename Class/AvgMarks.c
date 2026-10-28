#include <stdio.h>
int main() {
    int maths, hindi, english, computer, science;
    scanf("%d",&maths);
    scanf("%d",&hindi);
    scanf("%d",&english);
    scanf("%d",&computer);
    scanf("%d",&science);
    float avg=(maths+hindi+english+computer+science)/5;
    printf("%f",avg);
    return 0;
}