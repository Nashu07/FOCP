#include<stdio.h>
int main(){
    int area, circumference, radius;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Area of circle is: %f\n", 3.14 * radius * radius);
    printf("Circumference of circle is: %f\n", 2 * 3.14 * radius);
    
    return 0;
}