#include<stdio.h>
#include<math.h>
int main(){
    long long n,c;
    scanf("%lld",&n);
    for(long long i=1;i<=n;i++){
        c = pow(i,2);
        printf("%lld %lld\n",i,c);
    }
}