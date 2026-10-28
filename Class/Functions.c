#include<stdio.h>
int addition(int x, int y)
{
    int z=x+y;
    return z;
}
int multiply(int x, int y)
{
    int z=x*y;
    return z;
}
int divide(int x, int y)
{
    int z=x/y;
    return z;
}
int main(){
    int a,b,c,d,e;
    printf("enter a: ");
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    c=addition(a,b);
    d=multiply(a,b);
    e=divide(a,b);
    printf("value of C is: %d\n",c);
    printf("value of D is: %d\n",d);
    printf("value of E is: %d\n",e);
}