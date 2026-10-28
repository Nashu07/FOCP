#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter value of a=");
    scanf("%d",&a);
    printf("Enter value of b=");
    scanf("%d",&b);
    c = a+b;
    d = a-b;
    e = a*b;
    f = a/b;
    printf("Sum of a and b is=%d\n",c);
    printf("Difference of a and b is=%d\n",d);
    printf("Product of a and b is=%d\n",e);
    printf("Quotient of a and b is=%d\n",f);
}