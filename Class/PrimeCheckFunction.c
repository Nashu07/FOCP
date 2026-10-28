#include<stdio.h>
int PrimeCheck(long long n){
    if(n<=1)
        return 0;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    long long n;
    scanf("%lld",&n);
    if(PrimeCheck(n))
        printf("%lld is a prime number",n);
    else
        printf("%lld is not a prime number",n);
}