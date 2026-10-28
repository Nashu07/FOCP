#include<stdio.h>
int main(){
    int bornyear, currentyear, bornmonth, presentmonth,c;
    printf("Enter born month: ");
    scanf("%d",&bornmonth);
    printf("Enter your born year: ");
    scanf("%d",&bornyear);
    printf("Enter current month: ");
    scanf("%d",&presentmonth);
    printf("Enter current year: ");
    scanf("%d",&currentyear);
    c = (currentyear - bornyear) * 12 + (presentmonth - bornmonth);
    printf("Your age in months is: %d",c);
    return 0;
}