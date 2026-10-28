#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float result,s,p;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a ,&b,&c);
    s=(a+b+c)/2;
    p=s*(s-a)*(s-b)*(s-c);
    result=sqrt(p);
    printf("Result: %0.2f",result);
}