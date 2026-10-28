#include<stdio.h>
int main(){
    int length, breadth, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%d", &breadth);
    printf("Area of rectangle is: %d\n", length * breadth);
    printf("Perimeter of Reactangle is: %d\n", 2*(length + breadth));
    return 0;
}