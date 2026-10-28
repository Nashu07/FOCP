#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c); 
    if(a==b && b==c && a==c){
        printf("It is an Equilateral Triangle\n");
    }
    else if(a==b && b!=c || b==c && c!=a || a==c && c!=b){
        printf("It is an Isosceles Triangle\n");
    }
    else{
        printf("It is a Scalene Triangle\n");
    }

}