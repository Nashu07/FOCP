#include<stdio.h>
int main(){
    int Side1,Side2,area;
    printf("Enter Length of Side 1: ");
    scanf("%d",&Side1);
    printf("Enter Length of Side 2: ");
    scanf("%d",&Side2);
    area = (Side1 * Side2) / 2;
    printf("Area of Right Angle Triangle is: %d", area);
}