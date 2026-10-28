#include<stdio.h>
long long sumofgp(long long a,long long r,long long n){
    long long sum=0;
    for(int i=0;i<n;i++){
        sum += a;
        a *= r;
    }
    return sum;
}
int main(){
    long long a,r,n;
    scanf("%lld%lld%lld",&a,&r,&n);
    printf("Sum of GP: %lld",sumofgp(a,r,n));
}