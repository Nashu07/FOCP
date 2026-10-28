#include<stdio.h>
int main(){
    int side;
    printf("Enter side of square: ");
    scanf("%d", &side);
    printf("Area of square is: %d\n", side * side);
    printf("Perimeter of square is: %d\n", 4 * side);
    return 0;
}