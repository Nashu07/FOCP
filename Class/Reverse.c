#include<stdio.h>
int main(){
    int a;
    printf("Enter a two digit number: ");
    scanf("%d",&a);
    int reverse ;
    reverse = (a%10)*10 + (a/10);
    printf("%d\n",reverse);
}