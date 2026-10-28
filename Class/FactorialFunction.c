#include<stdio.h>
long long factorial(long long n)
{
    for(int i=n-1;i>=1;i--)
    {
        n=n*i;

    }
     return n;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d is: %lld",n,factorial(n));
}