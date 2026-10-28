#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter the number of units consumed:");
    scanf("%d",&units);
    if(units<=100){
        bill=units*2.0;
        printf("The electricity bill is: %.2f", bill);
    }
    else if(units>=101 && units<=200){
        bill=units*3.0;
        printf("The electricity bill is: %.2f", bill);
    }
    else if(units>=201){
        bill=units*5.0;
        printf("The electricity bill is: %.2f", bill);
    }
    else{
        printf("Invalid input");
    }
}
