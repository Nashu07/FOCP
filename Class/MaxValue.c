#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);
    if(a>b && a>c)
        printf("%d is the maximum number\n",a);
    else if(b>a && b>c)
        printf("%d is the maximum number\n",b);
    else
        printf("%d is the maximum number\n",c);

    return 0;
}