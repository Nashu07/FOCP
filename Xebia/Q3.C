#include<stdio.h>
int main(){
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("Space covered by Circular Fountain: %.2f", area);
}