#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter the selling price: ");
    scanf("%d", &sp);
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    if(sp > cp){
        printf("Profit: %d\n", sp - cp);
    }
    else if(sp < cp){
        printf("Loss: %d\n", cp - sp);
    }
    else{
        printf("No profit no loss\n");
    }
    return 0;
}